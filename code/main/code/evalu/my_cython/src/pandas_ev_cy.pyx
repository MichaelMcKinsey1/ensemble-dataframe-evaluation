import time
import sys
import pandas as pd
from .ev_helpers import calc_statistics

NANOS=1000000000

def col_count_cy(pandas_df, N_TRAVERSALS, num_rows, num_cols, name):
    # Column Count (Manual) Cython
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
    mean /= num_cols
    column_count_df = pd.DataFrame([["Nanoseconds", a_min, a_max, mean, (mean*N_TRAVERSALS)/num_rows, adj_metric],
                                        ["Seconds", a_min/NANOS, a_max/NANOS, mean/NANOS, ((mean/NANOS)*N_TRAVERSALS)/num_rows, adj_metric/NANOS]],
                                        columns=[name, 'Traversal-Time Min', 'TT Max', 'TT Mean', f'TT {N_TRAVERSALS}-traversals', f'TT {N_TRAVERSALS}-traversals (adjusted)'])
    return adj_metric, column_count_df