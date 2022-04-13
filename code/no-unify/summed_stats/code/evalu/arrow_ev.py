import sys
import time
import pyarrow as pa
import pandas as pd
from .ev_helpers import print_memory_size, calc_statistics

NANOS=1000000000


def arrow_eval(arrow_table, print_table, print_memory, print_time, N_TRAVERSALS):
    if(print_table):
        print(arrow_table)

    if(print_memory):
        # Memory
        print_memory_size(arrow_table, "Arrow table")

    if(print_time):
        num_rows = len(arrow_table.column(0))
        num_cols = len(arrow_table.columns)
        # Row traverse
        mean = 0
        a_min = sys.float_info.max
        a_max = sys.float_info.min
        time_saver = 0
        for k in range(len(arrow_table.column(0))):
            if time_saver > 10: # Save time while retaining most integrity of data.
                break
            start = time.time_ns()
            for j in range(EXTRA_ITER):
                for i in range(len(arrow_table.columns)):
                    arrow_table.column(i)[k]
            end = (time.time_ns() - start)/EXTRA_ITER
            a_min, a_max = calc_statistics(a_min, a_max, end)
            mean += end
            time_saver += 1
        mean /= time_saver
        row_traverse_df = pd.DataFrame([["Nanoseconds", a_min, a_max, mean, (mean*N_TRAVERSALS)/num_cols],
                                        ["Seconds", a_min/NANOS, a_max/NANOS, mean/NANOS, ((mean/NANOS)*N_TRAVERSALS)/num_cols]],
                                        columns=['Row Traverse', 'Traversal-Time Min', 'TT Max', 'TT Mean', f'TT {N_TRAVERSALS}-traversals'])
        print(row_traverse_df)
        # Column traverse
        mean = 0
        a_min = sys.float_info.max
        a_max = sys.float_info.min
        total = 0
        for k in range(len(arrow_table.columns)):
            column = arrow_table.column(k)
            start = time.time_ns()
            for i in range(len(column)):
                column[i]
            end = (time.time_ns() - start)
            a_min, a_max = calc_statistics(a_min, a_max, end)
            mean += end
        mean /= num_cols
        column_traverse_df = pd.DataFrame([["Nanoseconds", a_min, a_max, mean, (mean*N_TRAVERSALS)/num_rows],
                                           ["Seconds", a_min/NANOS, a_max/NANOS, mean/NANOS, ((mean/NANOS)*N_TRAVERSALS)/num_rows]],
                                           columns=['Column Traverse', 'Traversal-Time Min', 'TT Max', 'TT Mean', f'TT {N_TRAVERSALS}-traversals'])
        print(column_traverse_df)
        # # Diagonal traverse (Snaking down the rows)
        # column_size = len(arrow_table.columns)
        # start = time.time_ns()
        # for i in range(len(arrow_table.column(0))):
        #     arrow_table.column(i%column_size)[i]
        # end = (time.time_ns() - start)
        # print(f"Diagonal traverse time: {end}ns ({end/NANOS}s).")
        # Column traverse
        mean = 0
        a_min = sys.float_info.max
        a_max = sys.float_info.min
        total = 0
        for k in range(len(arrow_table.columns)):
            column = arrow_table.column(k)
            col_cnt = 0
            start = time.time_ns()
            for i in column:
                col_cnt += 1
            end = (time.time_ns() - start)
            print(f"column count = {col_cnt}")
            a_min, a_max = calc_statistics(a_min, a_max, end)
            mean += end
        mean /= num_cols
        column_traverse_df = pd.DataFrame([["Nanoseconds", a_min, a_max, mean, (mean*N_TRAVERSALS)/num_rows],
                                           ["Seconds", a_min/NANOS, a_max/NANOS, mean/NANOS, ((mean/NANOS)*N_TRAVERSALS)/num_rows]],
                                           columns=['Column Traverse', 'Traversal-Time Min', 'TT Max', 'TT Mean', f'TT {N_TRAVERSALS}-traversals'])
        print(column_traverse_df)

    if(BUILT_IN):
        # Column traverse
        mean = 0
        a_min = sys.float_info.max
        a_max = sys.float_info.min
        total = 0
        for k in range(len(arrow_table.columns)):
            column = arrow_table.column(k)
            col_cnt = 0
            start = time.time_ns()
            col_cnt = pa.compute.count(column, "all")
            end = (time.time_ns() - start)
            print(f"column count = {col_cnt}")
            a_min, a_max = calc_statistics(a_min, a_max, end)
            mean += end
        mean /= num_cols
        column_traverse_df = pd.DataFrame([["Nanoseconds", a_min, a_max, mean, (mean*N_TRAVERSALS)/num_rows],
                                           ["Seconds", a_min/NANOS, a_max/NANOS, mean/NANOS, ((mean/NANOS)*N_TRAVERSALS)/num_rows]],
                                           columns=['Column Traverse (built-in)', 'Traversal-Time Min', 'TT Max', 'TT Mean', f'TT {N_TRAVERSALS}-traversals'])
        print(column_traverse_df)