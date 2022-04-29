import sys
import time
import pandas as pd
import pyarrow as pa
import numpy as np
import helpers
from evalu import pandas_ev, dask_ev, arrow_ev
from slicing import slice_tests

EXTRA_OUT=False
MEMORY=True
TIME=True
BUILT_IN=True
NANOS=1000000000
N_TRAVERSALS=100
X=100

# Pandas display options for cli.
pd.set_option('display.width', 1500)
pd.set_option('display.max_rows', 30)
pd.set_option('display.max_columns', 10)
pd.set_option('display.float_format', lambda x: '%.5f' % x)


# def analyze_object_memory(?):
#     # # Memory Analysis of single objects.
#     # computed_ddf = dask_df.compute()
#     # print(pandas_df_reindexed['node'].iloc[0])
#     # print(computed_ddf['node'].iloc[0])
#     # for i in range(len(pandas_df_reindexed)):
#     #     if str(pandas_df_reindexed['node'].iloc[i]) == str(computed_ddf['node'].iloc[i]):
#     #         print(f"{i}: {str(pandas_df_reindexed['node'].iloc[i])} == {str(computed_ddf['node'].iloc[i])}")
#     #         print(f"{i}: {sys.getsizeof(pandas_df_reindexed['node'].iloc[i])} == {sys.getsizeof(computed_ddf['node'].iloc[i])}")
#     #         print(f"{i}: {type(pandas_df_reindexed['node'].iloc[i])} == {type(computed_ddf['node'].iloc[i])}")

def main():
    start_total_time = time.time()

    dataset = str(sys.argv[1])
    reader_type = str(sys.argv[2])
    
    pandas_df_reindexed, pandas_df_original = (helpers.prep_hatchet_gf(dataset, reader_type)[0]).dataframe, (helpers.prep_hatchet_gf(dataset, reader_type)[1]).dataframe # Hatchet graphframe.dataframe
    dask_df =  helpers.prep_dask_df(pandas_df_reindexed) # Pre-computed dask dataframe
    arrow_table = helpers.prep_arrow_table(pandas_df_reindexed) # Arrow table from pandas.
    
    pandas_orig_unstacked_zero = pandas_df_original.unstack(level=0)
    pandas_orig_unstacked_one = pandas_df_original.unstack(level=1)

    print(f"Rows: {len(pandas_df_original)}")
    print(f"Columns: {len(pandas_df_original.columns)}\n")

    helpers.print_separator("Slicing")
    slice_tests.slicing_tests(pandas_df_original, 10, X, N_TRAVERSALS, EXTRA_OUT)

    exit()

    helpers.print_separator("Pandas Original (unstacked 0)")
    pandas_zero_time, pandas_zero_built = pandas_ev.pandas_eval(pandas_orig_unstacked_zero, EXTRA_OUT, MEMORY, TIME, BUILT_IN, N_TRAVERSALS)

    helpers.print_separator("Pandas Original (unstacked 1)")
    pandas_one_time, pandas_one_built = pandas_ev.pandas_eval(pandas_orig_unstacked_one, EXTRA_OUT, MEMORY, TIME, BUILT_IN, N_TRAVERSALS)

    helpers.print_separator("Pandas Original")
    pandas_orig_time, pandas_orig_built = pandas_ev.pandas_eval(pandas_df_original, EXTRA_OUT, MEMORY, TIME, BUILT_IN, N_TRAVERSALS)

    # helpers.print_separator("Pandas Re-indexed")
    # pandas_time, pandas_built = pandas_ev.pandas_eval(pandas_df_reindexed, EXTRA_OUT, MEMORY, TIME, BUILT_IN, N_TRAVERSALS)

    # helpers.print_separator("Dask")
    # dask_time, dask_built = dask_ev.dask_eval(dask_df, EXTRA_OUT, MEMORY, TIME, BUILT_IN, N_TRAVERSALS)

    # helpers.print_separator("Arrow")
    # arrow_time, arrow_built = arrow_ev.arrow_eval(arrow_table, EXTRA_OUT, MEMORY, TIME, BUILT_IN, N_TRAVERSALS)

    helpers.print_separator("Results")
    print(f"*Entries are relative time measurements per-{N_TRAVERSALS} element accesses. X={X}")
    eval_list=[f'Pandas Original (unstacked 0) ({len(pandas_orig_unstacked_zero)}x{len(pandas_orig_unstacked_zero.columns)})',
        f'Pandas Original (unstacked 1) ({len(pandas_orig_unstacked_one)}x{len(pandas_orig_unstacked_one.columns)})', 
        f'Pandas Original ({len(pandas_df_original)}x{len(pandas_df_original.columns)})'] 
        #f'Pandas Re-indexed ({len(pandas_df_reindexed)}x{len(pandas_df_reindexed.columns)})', 'Dask', 'Arrow']
    time_data = [pandas_zero_time, pandas_one_time, pandas_orig_time]#, pandas_time, dask_time, arrow_time]
    built_data = [pandas_zero_built, pandas_one_built, pandas_orig_built]#, pandas_built, dask_built, arrow_built]
    X_lambda_func = lambda x: f"{round(x/X)}*X" if (not np.isnan(x)) else x
    res_df_time = pd.DataFrame(data=time_data, index=eval_list)
    res_df_time = res_df_time.applymap(X_lambda_func)
    print(res_df_time)
    res_df_built = pd.DataFrame(data=built_data, index=eval_list)
    res_df_built = res_df_built.applymap(X_lambda_func)
    print(res_df_built)
    
    end_total_time = time.time() - start_total_time
    print(f"\n\n\nTotal Program Time: {end_total_time}s. {end_total_time/60}m.")


if __name__ == "__main__":
    main()