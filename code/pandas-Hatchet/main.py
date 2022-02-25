import sys
import os
import platform
import time
import pandas as pd
import numpy as np
from IPython.display import display
import hatchet as ht
import lhue.hatchet.util.unify_ensemble as unify_ensemble

graph_frame_list = []
dataset = "../../data/lulesh-scaling/lulesh-annotation-profile-512cores.json"
num_datasets = 10 # How many times to replicate dataset

composition_time_start = time.time()
for i in range(num_datasets): # https://github.com/TauferLab/llnl-hatchet/blob/bd7d4c96c7a20d7a7b05cf1a4f41846ae36ab980/hatchet/tests/graphframe.py#L1186-L1192
    gf = ht.GraphFrame.from_caliper_json(dataset)
    dset_name = "dset{}".format(i)
    gf.dataset = dset_name
    graph_frame_list.append(gf)
composition_time = time.time() - composition_time_start

unified_gf = unify_ensemble.unify_ensemble(graph_frame_list)

print("############ PANDAS ############")
display(unified_gf.dataframe) # 'pandas.core.frame.DataFrame'
### Pandas Metrics ###
# Time
print(f"Composition time (Read time + Unify time) for {num_datasets} datasets ({num_datasets} reads, {num_datasets} unifies): " + str(composition_time))
# Size
unified_dataframe_size = sys.getsizeof(unified_gf.dataframe)
print("Size of unified GraphFrame's dataframe: " + str(unified_dataframe_size) + " bytes. " + str(unified_dataframe_size/1000000) + " mb(s).")



### Dask ###
print("\n\n############ DASK ############")
from dask.dataframe import from_pandas
ugd_ri = unified_gf.dataframe.reset_index() # https://docs.dask.org/en/latest/generated/dask.dataframe.DataFrame.reset_index.html
ddf = from_pandas(ugd_ri, npartitions=100)
computed_ddf = ddf.compute()
print(computed_ddf)

### Metrics ###
dask_dataframe_size = sys.getsizeof(computed_ddf)
print("Size of dask dataframe: " + str(dask_dataframe_size) + " bytes. " + str(dask_dataframe_size/1000000) + " mb(s).")



### Arrow ###
print("\n\n############ ARROW ############")
test = unified_gf.dataframe

# columns = list(test)
# print(columns)
# for i in columns:
#     print(test[i][2])
# print(test['name'][0])

import pyarrow as pa
#schema1 = pa.Schema.from_pandas(unified_gf.dataframe)
table = pa.Table.from_pandas(unified_gf.dataframe)#, schema=schema1, preserve_index=True)
print(table)
