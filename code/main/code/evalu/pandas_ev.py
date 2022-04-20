import sys
import time
import pandas as pd
from .ev_helpers import print_memory_size, calc_statistics
from .pandas_ev_cy import col_count_cy

RANDOM=False
NANOS=1000000000
MB=1000000


def pandas_eval(pandas_df, print_dataframe, print_memory, print_time, print_built_in, N_TRAVERSALS):
    num_rows = len(pandas_df)
    num_cols = len(pandas_df.columns)
    time_res = {}
    built_res = {}
    if(print_dataframe):
        print(pandas_df)

    if(print_memory):
        print("----------\nMemory\n----------")
        pandas_df.info(memory_usage="deep")
        mem_usage_tmp = pandas_df.memory_usage(deep=True)
        print(f"\n{mem_usage_tmp}")
        print(f"sum = {mem_usage_tmp.sum()} ({mem_usage_tmp.sum()/MB} MB)\n")
        print_memory_size(pandas_df, "Pandas dataframe (from Hatchet)")

    if(print_time or print_built_in):
        print("----------\nTime\n----------")

    if(print_time):
        # Row traverse (Iterable) (traversing a row)
        name = 'Row Traverse (Iterable)'
        mean = 0
        a_min = sys.float_info.max
        a_max = sys.float_info.min
        adj_start = time.time_ns()
        for row in pandas_df.itertuples(): # itertuples is faster than iterrows according to docs.
            start = time.time_ns() # The time.time_ns() resolution is 3 times better than the time.time() resolution on Linux and Windows. [https://peps.python.org/pep-0564/]
            for i in range(len(row)):
                row[i]
            end = (time.time_ns() - start)
            a_min, a_max = calc_statistics(a_min, a_max, end)
            mean += end
        adj_end = time.time_ns() - adj_start
        adj_metric = (adj_end*N_TRAVERSALS)/(num_rows*num_cols) # Denominator is dividing down to one traversal.
        time_res[name] = adj_metric
        mean /= num_rows
        row_traverse_df = pd.DataFrame([["Nanoseconds", a_min, a_max, mean, (mean*N_TRAVERSALS)/num_cols, adj_metric],
                                        ["Seconds", a_min/NANOS, a_max/NANOS, mean/NANOS, ((mean/NANOS)*N_TRAVERSALS)/num_cols, adj_metric/NANOS]],
                                        columns=[name, 'Traversal-Time Min', 'TT Max', 'TT Mean', f'TT {N_TRAVERSALS}-traversals', f'TT {N_TRAVERSALS}-traversals (adjusted)'])
        print(row_traverse_df)
        # Column Traverse (Iterable) (traversing a column)
        name = 'Column Traverse (Iterable)'
        mean = 0
        a_min = sys.float_info.max
        a_max = sys.float_info.min
        adj_start = time.time_ns()
        for column_name, column in pandas_df.iteritems():
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
        if(RANDOM): # Very expensive so off by default.
            # Column Traverse (Random)
            name = 'Column Traverse (Random)'
            mean = 0
            a_min = sys.float_info.max
            a_max = sys.float_info.min
            adj_start = time.time_ns()
            for k in range(num_cols):
                start = time.time_ns()
                for i in range(num_rows):
                    pandas_df.iat[i, k]
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
                    pandas_df.iat[k, i]
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
        # # Diagonal traverse (Snaking down the rows) (Really expensive)
        # row_size, column_size = pandas_df.shape
        # start = time.time_ns()
        # for i in range(row_size):
        #     pandas_df.iat[i,i%column_size]
        # end = (time.time_ns() - start)
        # print(f"Diagonal traverse time: {end}ns ({end/NANOS}s).")

    if(print_built_in):
        # Column Count (Manual)
        name = 'Column Count (Manual)'
        mean = 0
        a_min = sys.float_info.max
        a_max = sys.float_info.min
        adj_start = time.time_ns()
        for column_name, column in pandas_df.iteritems():
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
        # Column Count (Manual) Cython
        name = 'Column Count (Manual) Cython'
        temp_adj_metric, column_count_df = col_count_cy(pandas_df, N_TRAVERSALS, num_rows, num_cols, name)
        built_res[name] = temp_adj_metric
        print(column_count_df)
        # Column Count (Built-in)
        name = 'Column Count (Built-in)'
        mean = 0
        a_min = sys.float_info.max
        a_max = sys.float_info.min
        adj_start = time.time_ns()
        for column_name, column in pandas_df.iteritems():
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