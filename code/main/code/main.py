import sys
import time
import pandas as pd
import pyarrow as pa
import numpy as np
import helpers
from evalu import pandas_ev, dask_ev, arrow_ev

EXTRA_OUT=True
MEMORY=True
TIME=True
BUILT_IN=True
NANOS=1000000000
N_TRAVERSALS=1000
X=100

# Pandas display options for cli.
pd.set_option('display.width', 1500)
pd.set_option('display.max_rows', 30)
pd.set_option('display.max_columns', 10)
pd.set_option('display.float_format', lambda x: '%.5f' % x)


def main():
    start_total_time = time.time()

    dataset = str(sys.argv[1])
    reader_type = str(sys.argv[2])
    
    pandas_df_from_hatchet, pandas_df_original = (helpers.prep_hatchet_gf(dataset, reader_type)[0]).dataframe, (helpers.prep_hatchet_gf(dataset, reader_type)[1]).dataframe # Hatchet graphframe.dataframe
    dask_df =  helpers.prep_dask_df(pandas_df_from_hatchet) # Pre-computed dask dataframe
    arrow_table = helpers.prep_arrow_table(pandas_df_from_hatchet) # Arrow table from pandas.

    # computed_ddf = dask_df.compute()
    # print(pandas_df_from_hatchet['node'].iloc[0])
    # print(computed_ddf['node'].iloc[0])
    # for i in range(len(pandas_df_from_hatchet)):
    #     if str(pandas_df_from_hatchet['node'].iloc[i]) == str(computed_ddf['node'].iloc[i]):
    #         print(f"{i}: {str(pandas_df_from_hatchet['node'].iloc[i])} == {str(computed_ddf['node'].iloc[i])}")
    #         print(f"{i}: {sys.getsizeof(pandas_df_from_hatchet['node'].iloc[i])} == {sys.getsizeof(computed_ddf['node'].iloc[i])}")
    #         print(f"{i}: {type(pandas_df_from_hatchet['node'].iloc[i])} == {type(computed_ddf['node'].iloc[i])}")

    print(f"Rows: {len(pandas_df_original)}")
    print(f"Columns: {len(pandas_df_original.columns)}\n")

    for i in range(2):
        print(f"level={i}")
        print(pandas_df_original.unstack(level=i))
        print("\n")

    helpers.print_separator("Pandas Original")
    pandas_orig_time, pandas_orig_built = pandas_ev.pandas_eval(pandas_df_original, EXTRA_OUT, MEMORY, TIME, BUILT_IN, N_TRAVERSALS)

    helpers.print_separator("Pandas")
    pandas_time, pandas_built = pandas_ev.pandas_eval(pandas_df_from_hatchet, EXTRA_OUT, MEMORY, TIME, BUILT_IN, N_TRAVERSALS)

    # helpers.print_separator("Dask")
    # dask_time, dask_built = dask_ev.dask_eval(dask_df, EXTRA_OUT, MEMORY, TIME, BUILT_IN, N_TRAVERSALS)

    # helpers.print_separator("Arrow")
    # arrow_time, arrow_built = arrow_ev.arrow_eval(arrow_table, EXTRA_OUT, MEMORY, TIME, BUILT_IN, N_TRAVERSALS)

    helpers.print_separator("Results")
    eval_list=['Pandas Original', 'Pandas']#, 'Dask', 'Arrow']
    time_data = [pandas_orig_time, pandas_time]#, dask_time, arrow_time]
    built_data = [pandas_orig_built, pandas_built]#, dask_built, arrow_built]
    X_lambda_func = lambda x: f"{round(x/X)}*X" if (not np.isnan(x)) else x
    res_df_time = pd.DataFrame(data=time_data, index=eval_list)
    res_df_time = res_df_time.applymap(X_lambda_func)
    print(res_df_time)
    res_df_built = pd.DataFrame(data=built_data, index=eval_list)
    res_df_built = res_df_built.applymap(X_lambda_func)
    print(res_df_built)

    end_total_time = time.time() - start_total_time
    print(f"\n\n\nTotal Program Time: {end_total_time}s. {end_total_time/60}m.")


main()