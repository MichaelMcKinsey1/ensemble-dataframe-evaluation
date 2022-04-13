import sys
import time
import pandas as pd
from .ev_helpers import print_memory_size, calc_statistics

NANOS=1000000000


def dask_eval(dask_df, print_dataframe, print_memory, print_time, N_TRAVERSALS):
    computed_ddf = dask_df.compute()
    if(print_dataframe):
        print(dask_df)
        print(computed_ddf)

    if(print_memory):
        # Memory
        print_memory_size(dask_df, "Dask dataframe")
        print_memory_size(computed_ddf, "computed Dask dataframe")

    if(print_time):
        num_rows = len(dask_df)
        num_cols = len(dask_df.columns)
        # Row traverse
        mean = 0
        a_min = sys.float_info.max
        a_max = sys.float_info.min
        adj_start = time.time_ns()
        for row in computed_ddf.itertuples():
            start = time.time_ns()
            for i in range(len(row)):
                row[i]
            end = (time.time_ns() - start)
            a_min, a_max = calc_statistics(a_min, a_max, end)
            mean += end
        adj_end = time.time_ns() - adj_start
        adj_metric = (adj_end*N_TRAVERSALS)/(num_rows*num_cols)
        mean /= num_rows
        row_traverse_df = pd.DataFrame([["Nanoseconds", a_min, a_max, mean, (mean*N_TRAVERSALS)/num_cols, adj_metric],
                                        ["Seconds", a_min/NANOS, a_max/NANOS, mean/NANOS, ((mean/NANOS)*N_TRAVERSALS)/num_cols, adj_metric/NANOS]],
                                        columns=['Row Traverse (Iterables)', 'Traversal-Time Min', 'TT Max', 'TT Mean', f'TT {N_TRAVERSALS}-traversals', f'TT {N_TRAVERSALS}-traversals (adjusted)'])
        print(row_traverse_df)
        # Column traverse
        mean = 0
        a_min = sys.float_info.max
        a_max = sys.float_info.min
        adj_start = time.time_ns()
        for column_name, column in computed_ddf.iteritems():
            start = time.time_ns()
            for index, value in column.iteritems():
                value
            end = (time.time_ns() - start)
            a_min, a_max = calc_statistics(a_min, a_max, end)
            mean += end
        adj_end = time.time_ns() - adj_start
        adj_metric = (adj_end*N_TRAVERSALS)/(num_rows*num_cols)
        mean /= num_cols
        column_traverse_df = pd.DataFrame([["Nanoseconds", a_min, a_max, mean, (mean*N_TRAVERSALS)/num_rows, adj_metric],
                                           ["Seconds", a_min/NANOS, a_max/NANOS, mean/NANOS, ((mean/NANOS)*N_TRAVERSALS)/num_rows, adj_metric/NANOS]],
                                           columns=['Column Traverse (Iterables)', 'Traversal-Time Min', 'TT Max', 'TT Mean', f'TT {N_TRAVERSALS}-traversals', f'TT {N_TRAVERSALS}-traversals (adjusted)'])
        print(column_traverse_df)
        # Column traverse (Random Access)
            # ~ Removed
        # # Diagonal traverse (Snaking down the rows)
        # row_size, column_size = computed_ddf.shape
        # start = time.time_ns()
        # for i in range(row_size):
        #     computed_ddf.iat[i,i%column_size]
        # end = (time.time_ns() - start)
        # print(f"Diagonal traverse time: {end}ns ({end/NANOS}s).")