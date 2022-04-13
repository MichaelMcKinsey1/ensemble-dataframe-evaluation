import sys
import time
import pandas as pd
import pyarrow as pa
import numpy as np
import helpers
from evalu import pandas_ev, dask_ev, arrow_ev

EXTRA_OUT=False
MEMORY=True
TIME=True
BUILT_IN=True
EXTRA_ITER=int(sys.argv[1])
NANOS=1000000000
N_TRAVERSALS=1000

# Pandas display options for cli.
pd.set_option('display.width', 1000)
pd.set_option('display.max_rows', 100)
pd.set_option('display.max_columns', 10)
pd.set_option('display.float_format', lambda x: '%.5f' % x)


def main():
    start_total_time = time.time()

    dataset = str(sys.argv[2])
    reader_type = str(sys.argv[3])
    
    pandas_df_from_hatchet = (helpers.prep_hatchet_gf(dataset, reader_type)).dataframe # Hatchet graphframe.dataframe
    dask_df =  helpers.prep_dask_df(pandas_df_from_hatchet) # Pre-computed dask dataframe
    arrow_table = helpers.prep_arrow_table(pandas_df_from_hatchet) # Arrow table from pandas.

    print(f"Rows: {len(pandas_df_from_hatchet)}")
    print(f"Columns: {len(pandas_df_from_hatchet.columns)}")
    print(f"Extra Iterations: {EXTRA_ITER}")

    helpers.print_separator("Pandas")
    pandas_ev.pandas_eval(pandas_df_from_hatchet, EXTRA_OUT, MEMORY, TIME, N_TRAVERSALS)

    helpers.print_separator("Dask")
    dask_ev.dask_eval(dask_df, EXTRA_OUT, MEMORY, TIME, N_TRAVERSALS)

    # helpers.print_separator("Arrow")
    # arrow_ev.arrow_eval(arrow_table, EXTRA_OUT, MEMORY, TIME, N_TRAVERSALS)

    end_total_time = time.time() - start_total_time
    print(f"\n\n\nTotal Program Time: {end_total_time}s. {end_total_time/60}m.")


main()