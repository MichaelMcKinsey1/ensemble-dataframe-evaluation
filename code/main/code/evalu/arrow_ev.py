import sys
import time
import pyarrow as pa
import pandas as pd
from .ev_helpers import print_memory_size, calc_statistics

NANOS=1000000000


def arrow_eval(arrow_table, print_table, print_memory, print_time, print_built_in, N_TRAVERSALS):  
    num_rows = len(arrow_table.column(0))
    num_cols = len(arrow_table.columns)
    time_res = {}
    built_res = {}
    if(print_table):
        print(arrow_table)

    if(print_memory):
        # Memory
        print_memory_size(arrow_table, "Arrow table")

    if(print_time):
        # Row Traverse (Random)
        name = 'Row Traverse (Random)'
        mean = 0
        a_min = sys.float_info.max
        a_max = sys.float_info.min
        adj_start = time.time_ns()
        for k in range(len(arrow_table.column(0))):
            start = time.time_ns()
            for i in range(len(arrow_table.columns)):
                arrow_table.column(i)[k]
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
        # Column Traverse (Random)
        name = 'Column Traverse (Random)'
        mean = 0
        a_min = sys.float_info.max
        a_max = sys.float_info.min
        adj_start = time.time_ns()
        for k in range(len(arrow_table.columns)):
            column = arrow_table.column(k)
            start = time.time_ns()
            for i in range(len(column)):
                column[i]
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
        # Column Traverse (Iterable)
        name = 'Column Traverse (Iterable)'
        mean = 0
        a_min = sys.float_info.max
        a_max = sys.float_info.min
        adj_start = time.time_ns()
        for column in arrow_table.itercolumns():
            start = time.time_ns()
            for i in column:
                i
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
        # # Diagonal traverse (Snaking down the rows)
        # column_size = len(arrow_table.columns)
        # start = time.time_ns()
        # for i in range(len(arrow_table.column(0))):
        #     arrow_table.column(i%column_size)[i]
        # end = (time.time_ns() - start)
        # print(f"Diagonal traverse time: {end}ns ({end/NANOS}s).")
        # Column traverse

    if(print_built_in):
        # Column Count (Manual)
        name = 'Column Count (Manual)'
        mean = 0
        a_min = sys.float_info.max
        a_max = sys.float_info.min
        adj_start = time.time_ns()
        for column in arrow_table.itercolumns():
            col_cnt = 0
            start = time.time_ns()
            for i in column:
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
        for k in range(len(arrow_table.columns)):
            column = arrow_table.column(k)
            col_cnt = 0
            start = time.time_ns()
            col_cnt = pa.compute.count(column, "all")
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