from scipy import stats
import copy
import time
import pandas as pd
import numpy as np
from scipy import stats

'''
Info:
    - Python slicing
        Example: a[start:stop:step] # start through not past stop, by step (https://stackoverflow.com/questions/509211/understanding-slicing)
    - Label indexing (with hatchet node as zero index)
        hatchet_node = hatchet.node.Node({'name': '<program root>', 'type': 'function'})
        print(hatchet_node)
        print(type(hatchet_node))
        print(df[hatchet_node, 0]) # <- Does not work :(
    - location indexing
        print(df.iloc[0::step_size]) # Get every node's rank 0
        print(df.iloc[1::step_size]) # Get every node's rank 1
        print(df.index.levels[0]) # node
        print(df.index.levels[1]) # rank
'''


def slice_statistics(a_slice, nobs, N_TRAVERSALS):
    '''Computes statistics on a slice (pandas.core.series.Series). Should be a numeric slice so sum can be computed.

    Args:
        a_slice: Slice of pandas dataframe.
        nobs: Number of observations.

    Returns:
        ?
    '''
    num_rows = len(a_slice)
    deep_slice = copy.deepcopy(a_slice)
    t_arr = []
    dt_arr = []
    bt_arr = []
    bdt_arr = []

    # traversals
    for i in range(nobs):
        start = time.time_ns()
        for index, value in a_slice.iteritems():
            value
        end = (time.time_ns() - start)
        adj_metric = (end*N_TRAVERSALS)/(num_rows)
        t_arr.append(adj_metric)

        start = time.time_ns()
        for index, value in deep_slice.iteritems():
            value
        end = (time.time_ns() - start)
        adj_metric = (end*N_TRAVERSALS)/(num_rows)
        dt_arr.append(adj_metric)
        
    
    # built-in
    for i in range(nobs):
        start = time.time_ns()
        s_sum = a_slice.sum()
        end = time.time_ns() - start
        adj_metric = (end*N_TRAVERSALS)/(num_rows)
        bt_arr.append(adj_metric)

        start = time.time_ns()
        ds_sum = deep_slice.sum()
        end = time.time_ns() - start
        adj_metric = (end*N_TRAVERSALS)/(num_rows)
        bdt_arr.append(adj_metric)

        assert(s_sum==ds_sum)
        
    traversal_stats = stats.describe(t_arr)
    dtraversal_stats = stats.describe(dt_arr)
    built_stats = stats.describe(bt_arr)
    dbuilt_stats = stats.describe(bdt_arr)

    return traversal_stats, dtraversal_stats, built_stats, dbuilt_stats


def slicing_tests(df, nobs, X, N_TRAVERSALS, EXTRA_OUT, DEBUG):
    '''
    Args:
        df: A 2-level multi-indexed pandas dataframe.
        nobs: Number of observations.
    '''
    step_size = df.index.levels[1].size # number of elements in the second level (level 0).

    rank_zero_times = df.iloc[0::step_size]['time']
    rzt_stats, drzt_stats, rzt_built_stats, drzt_built_stats = slice_statistics(rank_zero_times, nobs, N_TRAVERSALS)

    rank_one_times = df.iloc[1::step_size]['time']
    rot_stats, drot_stats, rot_built_stats, drot_built_stats = slice_statistics(rank_one_times, nobs, N_TRAVERSALS)

    rank_ten_times = df.iloc[10::step_size]['time']
    rtt_stats, drtt_stats, rtt_built_stats, drtt_built_stats = slice_statistics(rank_ten_times, nobs, N_TRAVERSALS)

    rank_zero_ten_times = df.iloc[0::10]['time']
    rztt_stats, drztt_stats, rztt_built_stats, drztt_built_stats = slice_statistics(rank_ten_times, nobs, N_TRAVERSALS)

    if EXTRA_OUT:
        slices_dic = {"Rank Zero Times": rank_zero_times, "Rank One Times": rank_one_times, "Rank Ten Times": rank_ten_times, "Rank Zero through Ten Times": rank_zero_ten_times}
        for k in slices_dic:
            print(f"--- {k} ---\n{slices_dic[k]}\n")
        if DEBUG: # See the raw statistics.
            stats_list = [rzt_stats, drzt_stats, rzt_built_stats, drzt_built_stats,
                rot_stats, drot_stats, rot_built_stats, drot_built_stats,
                rtt_stats, drtt_stats, rtt_built_stats, drtt_built_stats,
                rztt_stats, drztt_stats, rztt_built_stats, drztt_built_stats]
            for i in stats_list:
                print(i)
    
    print(f"*Entries are relative time measurements per-{N_TRAVERSALS} element accesses. X={X}. nobs={nobs}.")
    eval_list=[f'Nodes=all, Rank=0 ({len(rank_zero_times)}x1)',
        f'Nodes=all, Rank=1 ({len(rank_one_times)}x1)',
        f'Nodes=all, Rank=10 ({len(rank_ten_times)}x1)',
        f'Nodes=all, Rank=10x ({len(rank_zero_ten_times)}x1)']
    time_data = {"Slice": [rzt_stats, rot_stats, rtt_stats, rztt_stats], "Deep Copy": [drzt_stats, drot_stats, drtt_stats, drztt_stats]}
    built_data = {"Slice": [rzt_built_stats, rot_built_stats, rtt_built_stats, rztt_built_stats], "Deep Copy": [drzt_built_stats, drot_built_stats, drtt_built_stats, drztt_built_stats]}
    X_lambda_func = lambda x: f"{round(x.mean/X)}*X" if (not np.isnan(x.mean)) else x.mean
    df_time = pd.DataFrame(data=time_data, index=eval_list)
    df_time = df_time.applymap(X_lambda_func)
    print(f"Traversal Times\n{df_time}")
    df_built = pd.DataFrame(data=built_data, index=eval_list)
    df_built = df_built.applymap(X_lambda_func)
    print(f"Built-in (Sum)\n{df_built}")
    