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
NANOS=1000000000
N_TRAVERSALS=1000
X=100

# Pandas display options for cli.
pd.set_option('display.width', 1000)
pd.set_option('display.max_rows', 100)
pd.set_option('display.max_columns', 10)
pd.set_option('display.float_format', lambda x: '%.5f' % x)


def main():
    start_total_time = time.time()

    dataset = str(sys.argv[1])
    reader_type = str(sys.argv[2])
    
    pandas_df_from_hatchet = (helpers.prep_hatchet_gf(dataset, reader_type)).dataframe # Hatchet graphframe.dataframe
    dask_df =  helpers.prep_dask_df(pandas_df_from_hatchet) # Pre-computed dask dataframe
    arrow_table = helpers.prep_arrow_table(pandas_df_from_hatchet) # Arrow table from pandas.

    print(f"Rows: {len(pandas_df_from_hatchet)}")
    print(f"Columns: {len(pandas_df_from_hatchet.columns)}")

    helpers.print_separator("Pandas")
    pandas_time, pandas_built = pandas_ev.pandas_eval(pandas_df_from_hatchet, EXTRA_OUT, MEMORY, TIME, BUILT_IN, N_TRAVERSALS)

    helpers.print_separator("Dask")
    dask_time, dask_built = dask_ev.dask_eval(dask_df, EXTRA_OUT, MEMORY, TIME, BUILT_IN, N_TRAVERSALS)

    helpers.print_separator("Arrow")
    arrow_time, arrow_built = arrow_ev.arrow_eval(arrow_table, EXTRA_OUT, MEMORY, TIME, BUILT_IN, N_TRAVERSALS)

    helpers.print_separator("Results")
    X_lambda_func = lambda x: f"{round(x/X)}*X" if (not np.isnan(x)) else x
    res_df_time = pd.DataFrame(data=[pandas_time, dask_time, arrow_time], index=['Pandas', 'Dask', 'Arrow'])
    res_df_time = res_df_time.applymap(X_lambda_func)
    print(res_df_time)
    res_df_built = pd.DataFrame(data=[pandas_built, dask_built, arrow_built], index=['Pandas', 'Dask', 'Arrow'])
    res_df_built = res_df_built.applymap(X_lambda_func)
    print(res_df_built)

    end_total_time = time.time() - start_total_time
    print(f"\n\n\nTotal Program Time: {end_total_time}s. {end_total_time/60}m.")


main()