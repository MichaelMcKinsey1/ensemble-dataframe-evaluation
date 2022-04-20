import sys
import time
import pandas as pd
from .ev_helpers import print_memory_size, calc_statistics

RANDOM=False
NANOS=1000000000
MB=1000000


def dask_eval(dask_df, print_dataframe, print_memory, print_time, print_built_in, N_TRAVERSALS):
    computed_ddf = dask_df.compute()
    num_rows = len(dask_df)
    num_cols = len(dask_df.columns)
    time_res = {}
    built_res = {}
    if(print_dataframe):
        print(dask_df)
        print(computed_ddf)

    if(print_memory):
        print("----------\nMemory\n----------")
        computed_ddf.info(memory_usage="deep")
        mem_usage_tmp = computed_ddf.memory_usage(deep=True)
        print(f"\n{mem_usage_tmp}")
        print(f"sum = {mem_usage_tmp.sum()} ({mem_usage_tmp.sum()/MB} MB)\n")
        print_memory_size(computed_ddf, "computed Dask dataframe")

    if(print_time or print_built_in):
        print("----------\nTime\n----------")

    if(print_time):
        # Row Traverse (Iterable)
        name = 'Row Traverse (Iterable)'
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
        time_res[name] = adj_metric
        mean /= num_rows
        row_traverse_df = pd.DataFrame([["Nanoseconds", a_min, a_max, mean, (mean*N_TRAVERSALS)/num_cols, adj_metric],
                                        ["Seconds", a_min/NANOS, a_max/NANOS, mean/NANOS, ((mean/NANOS)*N_TRAVERSALS)/num_cols, adj_metric/NANOS]],
                                        columns=[name, 'Traversal-Time Min', 'TT Max', 'TT Mean', f'TT {N_TRAVERSALS}-traversals', f'TT {N_TRAVERSALS}-traversals (adjusted)'])
        print(row_traverse_df)
        # Column Traverse (Iterable)
        name = 'Column Traverse (Iterable)'
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
        time_res[name] = adj_metric
        mean /= num_cols
        column_traverse_df = pd.DataFrame([["Nanoseconds", a_min, a_max, mean, (mean*N_TRAVERSALS)/num_rows, adj_metric],
                                           ["Seconds", a_min/NANOS, a_max/NANOS, mean/NANOS, ((mean/NANOS)*N_TRAVERSALS)/num_rows, adj_metric/NANOS]],
                                           columns=[name, 'Traversal-Time Min', 'TT Max', 'TT Mean', f'TT {N_TRAVERSALS}-traversals', f'TT {N_TRAVERSALS}-traversals (adjusted)'])
        print(column_traverse_df)
        if(RANDOM):
            # Column traverse (Random Access)
            name = 'Column Traverse (Random)'
            mean = 0
            a_min = sys.float_info.max
            a_max = sys.float_info.min
            adj_start = time.time_ns()
            for k in range(num_cols):
                start = time.time_ns()
                for i in range(num_rows):
                    computed_ddf.iat[i, k]
                a_min, a_max = calc_statistics(a_min, a_max, end)
                mean += end
            adj_end = time.time_ns() - adj_start
            adj_metric = (adj_end*N_TRAVERSALS)/(num_rows*num_cols)
            time_res[name] = adj_metric
            mean /= num_cols
            column_traverse_df = pd.DataFrame([["Nanoseconds", a_min, a_max, mean, (mean*N_TRAVERSALS)/num_rows, adj_metric],
                                            ["Seconds", a_min/NANOS, a_max/NANOS, mean/NANOS, ((mean/NANOS)*N_TRAVERSALS)/num_rows, adj_metric/NANOS]],
                                            columns=[name, 'Traversal-Time Min', 'TT Max', 'TT Mean', f'TT {N_TRAVERSALS}-traversals', f'TT {N_TRAVERSALS}-traversals (adjusted)'])
            print(column_traverse_df)
            # Row Traverse (Random)
            name = 'Row Traverse (Random)'
            mean = 0
            a_min = sys.float_info.max
            a_max = sys.float_info.min
            adj_start = time.time_ns()
            for k in range(num_rows):
                start = time.time_ns()
                for i in range(num_cols):
                    computed_ddf.iat[k, i]
                a_min, a_max = calc_statistics(a_min, a_max, end)
                mean += end
            adj_end = time.time_ns() - adj_start
            adj_metric = (adj_end*N_TRAVERSALS)/(num_rows*num_cols)
            time_res[name] = adj_metric
            mean /= num_rows
            row_traverse_df = pd.DataFrame([["Nanoseconds", a_min, a_max, mean, (mean*N_TRAVERSALS)/num_cols, adj_metric],
                                            ["Seconds", a_min/NANOS, a_max/NANOS, mean/NANOS, ((mean/NANOS)*N_TRAVERSALS)/num_cols, adj_metric/NANOS]],
                                            columns=[name, 'Traversal-Time Min', 'TT Max', 'TT Mean', f'TT {N_TRAVERSALS}-traversals', f'TT {N_TRAVERSALS}-traversals (adjusted)'])
            print(row_traverse_df)
        # # Diagonal traverse (Snaking down the rows)
        # row_size, column_size = computed_ddf.shape
        # start = time.time_ns()
        # for i in range(row_size):
        #     computed_ddf.iat[i,i%column_size]
        # end = (time.time_ns() - start)
        # print(f"Diagonal traverse time: {end}ns ({end/NANOS}s).")

    if(print_built_in):
        # Column Count (Manual)
        name = 'Column Count (Manual)'
        mean = 0
        a_min = sys.float_info.max
        a_max = sys.float_info.min
        adj_start = time.time_ns()
        for column_name, column in computed_ddf.iteritems():
            col_cnt = 0
            start = time.time_ns()
            for index, value in column.iteritems():
                col_cnt += 1
            end = (time.time_ns() - start)
            a_min, a_max = calc_statistics(a_min, a_max, end)
            mean += end
        adj_end = time.time_ns() - adj_start
        adj_metric = (adj_end*N_TRAVERSALS)/(num_rows*num_cols)
        built_res[name] = adj_metric
        mean /= num_cols
        column_count_df = pd.DataFrame([["Nanoseconds", a_min, a_max, mean, (mean*N_TRAVERSALS)/num_rows, adj_metric],
                                           ["Seconds", a_min/NANOS, a_max/NANOS, mean/NANOS, ((mean/NANOS)*N_TRAVERSALS)/num_rows, adj_metric/NANOS]],
                                           columns=[name, 'Traversal-Time Min', 'TT Max', 'TT Mean', f'TT {N_TRAVERSALS}-traversals', f'TT {N_TRAVERSALS}-traversals (adjusted)'])
        print(column_count_df)
        # Column Count (Built-in)
        name = 'Column Count (Built-in)'
        mean = 0
        a_min = sys.float_info.max
        a_max = sys.float_info.min
        adj_start = time.time_ns()
        for column_name, column in computed_ddf.iteritems():
            start = time.time_ns()
            col_cnt = column.count()
            end = (time.time_ns() - start)
            a_min, a_max = calc_statistics(a_min, a_max, end)
            mean += end
        adj_end = time.time_ns() - adj_start
        adj_metric = (adj_end*N_TRAVERSALS)/(num_rows*num_cols)
        built_res[name] = adj_metric
        mean /= num_cols
        column_count_df = pd.DataFrame([["Nanoseconds", a_min, a_max, mean, (mean*N_TRAVERSALS)/num_rows, adj_metric],
                                           ["Seconds", a_min/NANOS, a_max/NANOS, mean/NANOS, ((mean/NANOS)*N_TRAVERSALS)/num_rows, adj_metric/NANOS]],
                                           columns=[name, 'Traversal-Time Min', 'TT Max', 'TT Mean', f'TT {N_TRAVERSALS}-traversals', f'TT {N_TRAVERSALS}-traversals (adjusted)'])
        print(column_count_df)

    return time_res, built_res