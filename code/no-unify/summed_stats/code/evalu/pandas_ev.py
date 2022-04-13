import sys
import time
import pandas as pd
from .ev_helpers import print_memory_size, calc_statistics

NANOS=1000000000


def pandas_eval(pandas_df, print_dataframe, print_memory, print_time, N_TRAVERSALS):
    if(print_dataframe):
        print(pandas_df)

    if(print_memory):
        print_memory_size(pandas_df, "Pandas dataframe (from Hatchet)")

    if(print_time):
        num_rows = len(pandas_df)
        num_cols = len(pandas_df.columns)
        # Row traverse (Iterables) (traversing a row)
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
        mean /= num_rows
        row_traverse_df = pd.DataFrame([["Nanoseconds", a_min, a_max, mean, (mean*N_TRAVERSALS)/num_cols, adj_metric],
                                        ["Seconds", a_min/NANOS, a_max/NANOS, mean/NANOS, ((mean/NANOS)*N_TRAVERSALS)/num_cols, adj_metric/NANOS]],
                                        columns=['Row Traverse (Iterables)', 'Traversal-Time Min', 'TT Max', 'TT Mean', f'TT {N_TRAVERSALS}-traversals', f'TT {N_TRAVERSALS}-traversals (adjusted)'])
        print(row_traverse_df)
        # Column traverse (Iterables) (traversing a column)
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
        mean /= num_cols
        column_traverse_df = pd.DataFrame([["Nanoseconds", a_min, a_max, mean, (mean*N_TRAVERSALS)/num_rows, adj_metric],
                                           ["Seconds", a_min/NANOS, a_max/NANOS, mean/NANOS, ((mean/NANOS)*N_TRAVERSALS)/num_rows, adj_metric/NANOS]],
                                           columns=['Column Traverse (Iterables)', 'Traversal-Time Min', 'TT Max', 'TT Mean', f'TT {N_TRAVERSALS}-traversals', f'TT {N_TRAVERSALS}-traversals (adjusted)'])
        print(column_traverse_df)
        # Column traverse (Random Access)
            # ~ Removed
        # # Diagonal traverse (Snaking down the rows) (Really expensive)
        # row_size, column_size = pandas_df.shape
        # start = time.time_ns()
        # for i in range(row_size):
        #     pandas_df.iat[i,i%column_size]
        # end = (time.time_ns() - start)
        # print(f"Diagonal traverse time: {end}ns ({end/NANOS}s).")
