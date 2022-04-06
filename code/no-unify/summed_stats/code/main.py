import time
import pandas as pd
import pyarrow as pa
import numpy as np
import sys
import helpers
from helpers import print_memory_size, print_separator, calc_statistics

EXTRA_OUT=True
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

def pandas_eval(pandas_df):
    if(EXTRA_OUT):
        print(pandas_df)

    if(MEMORY):
        print_memory_size(pandas_df, "Pandas dataframe (from Hatchet)")

    if(TIME):
        num_rows = len(pandas_df)
        num_cols = len(pandas_df.columns)
        # Row traverse (Iterables) (traversing a row)
        mean = 0
        a_min = sys.float_info.max
        a_max = sys.float_info.min
        time_saver = 0
        for row in pandas_df.itertuples(): # itertuples is faster than iterrows according to docs.
            if time_saver > 10: # Save time while retaining most integrity of data.
                break
            start = time.time_ns() # The time.time_ns() resolution is 3 times better than the time.time() resolution on Linux and Windows. [https://peps.python.org/pep-0564/]
            for j in range(EXTRA_ITER):
                for i in range(len(row)):
                    row[i]
            end = (time.time_ns() - start)/EXTRA_ITER
            a_min, a_max = calc_statistics(a_min, a_max, end)
            mean += end
            time_saver += 1
        mean /= time_saver
        row_traverse_df = pd.DataFrame([["Nanoseconds", a_min, a_max, mean, (mean*N_TRAVERSALS)/num_cols],
                                        ["Seconds", a_min/NANOS, a_max/NANOS, mean/NANOS, ((mean/NANOS)*N_TRAVERSALS)/num_cols]],
                                        columns=['Row Traverse (Iterables)', 'Traversal-Time Min', 'TT Max', 'TT Mean', f'TT {N_TRAVERSALS}-traversals'])
        print(row_traverse_df)
        # Column traverse (Iterables) (traversing a column)
        mean = 0
        a_min = sys.float_info.max
        a_max = sys.float_info.min
        for column_name, column in pandas_df.iteritems():
            start = time.time_ns()
            for index, value in column.iteritems():
                value
            end = (time.time_ns() - start)
            a_min, a_max = calc_statistics(a_min, a_max, end)
            mean += end
        mean /= num_cols
        column_traverse_df = pd.DataFrame([["Nanoseconds", a_min, a_max, mean, (mean*N_TRAVERSALS)/num_rows],
                                           ["Seconds", a_min/NANOS, a_max/NANOS, mean/NANOS, ((mean/NANOS)*N_TRAVERSALS)/num_rows]],
                                           columns=['Column Traverse (Iterables)', 'Traversal-Time Min', 'TT Max', 'TT Mean', f'TT {N_TRAVERSALS}-traversals'])
        print(column_traverse_df)
        # Column traverse (Random Access)
            # ~ Removed
        # Column traverse (NumPy interface) (https://stackoverflow.com/questions/44960614/whats-the-fastest-way-to-acces-a-pandas-dataframe)
            # ~ Removed
        # Diagonal traverse (Snaking down the rows)
        row_size, column_size = pandas_df.shape
        start = time.time_ns()
        for i in range(row_size):
            pandas_df.iat[i,i%column_size]
        end = (time.time_ns() - start)
        print(f"Diagonal traverse time: {end}ns ({end/NANOS}s).")


def dask_eval(dask_df):
    computed_ddf = dask_df.compute()
    if(EXTRA_OUT):
        print(dask_df)
        print(computed_ddf)

    if(MEMORY):
        # Memory
        print_memory_size(dask_df, "Dask dataframe")
        print_memory_size(computed_ddf, "computed Dask dataframe")

    if(TIME):
        num_rows = len(dask_df)
        num_cols = len(dask_df.columns)
        # Row traverse
        mean = 0
        a_min = sys.float_info.max
        a_max = sys.float_info.min
        time_saver = 0
        for row in computed_ddf.itertuples():
            if time_saver > 10: # Save time while retaining most integrity of data.
                break
            start = time.time_ns()
            for j in range(EXTRA_ITER):
                for i in range(len(row)):
                    row[i]
            end = (time.time_ns() - start)/EXTRA_ITER
            a_min, a_max = calc_statistics(a_min, a_max, end)
            mean += end
            time_saver += 1
        mean /= time_saver
        row_traverse_df = pd.DataFrame([["Nanoseconds", a_min, a_max, mean, (mean*N_TRAVERSALS)/num_cols],
                                        ["Seconds", a_min/NANOS, a_max/NANOS, mean/NANOS, ((mean/NANOS)*N_TRAVERSALS)/num_cols]],
                                        columns=['Row Traverse (Iterables)', 'Traversal-Time Min', 'TT Max', 'TT Mean', f'TT {N_TRAVERSALS}-traversals'])
        print(row_traverse_df)
        # Column traverse
        mean = 0
        a_min = sys.float_info.max
        a_max = sys.float_info.min
        for column_name, column in computed_ddf.iteritems():
            start = time.time_ns()
            for index, value in column.iteritems():
                value
            end = (time.time_ns() - start)
            a_min, a_max = calc_statistics(a_min, a_max, end)
            mean += end
        mean /= num_cols
        column_traverse_df = pd.DataFrame([["Nanoseconds", a_min, a_max, mean, (mean*N_TRAVERSALS)/num_rows],
                                           ["Seconds", a_min/NANOS, a_max/NANOS, mean/NANOS, ((mean/NANOS)*N_TRAVERSALS)/num_rows]],
                                           columns=['Column Traverse (Iterables)', 'Traversal-Time Min', 'TT Max', 'TT Mean', f'TT {N_TRAVERSALS}-traversals'])
        print(column_traverse_df)
        # Column traverse (Random Access)
            # ~ Removed
        # Diagonal traverse (Snaking down the rows)
        row_size, column_size = computed_ddf.shape
        start = time.time_ns()
        for i in range(row_size):
            computed_ddf.iat[i,i%column_size]
        end = (time.time_ns() - start)
        print(f"Diagonal traverse time: {end}ns ({end/NANOS}s).")

def arrow_eval(arrow_table):
    if(EXTRA_OUT):
        print(arrow_table)

    if(MEMORY):
        # Memory
        print_memory_size(arrow_table, "Arrow table")

    if(TIME):
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
        # Diagonal traverse (Snaking down the rows)
        column_size = len(arrow_table.columns)
        start = time.time_ns()
        for i in range(len(arrow_table.column(0))):
            arrow_table.column(i%column_size)[i]
        end = (time.time_ns() - start)
        print(f"Diagonal traverse time: {end}ns ({end/NANOS}s).")
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


def main():
    start_total_time = time.time()

    dataset = str(sys.argv[2])
    reader_type = str(sys.argv[3])
    
    pandas_df_from_hatchet = (helpers.prep_hatchet_gf(dataset, reader_type)).dataframe # Hatchet graphframe.dataframe
    dask_df =  helpers.prep_dask_df(pandas_df_from_hatchet) # Pre-computed dask dataframe
    arrow_table = helpers.prep_arrow_table(pandas_df_from_hatchet) # Arrow table from pandas.

    print(f"Rows: {len(pandas_df_from_hatchet)}")
    print(f"Columns: {len(pandas_df_from_hatchet.columns)}")

    # print_separator("Pandas")
    # pandas_eval(pandas_df_from_hatchet)

    # print_separator("Dask")
    # dask_eval(dask_df)

    print_separator("Arrow")
    arrow_eval(arrow_table)

    end_total_time = time.time() - start_total_time
    print(f"\n\n\nProgram Time: {end_total_time}s. {end_total_time/60}m.")


main()