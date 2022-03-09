import time
import pandas as pd
import helpers
from helpers import print_memory_size, print_separator

EXTRA_OUT=True
MEMORY=True
TIME=True

# Pandas display options for cli.
pd.set_option('display.width', 1000)
pd.set_option('display.max_rows', 500)
pd.set_option('display.max_columns', 500)

def pandas_eval(pandas_df):
    if(EXTRA_OUT):
        print(pandas_df)

    if(MEMORY):
        # Memory
        print_memory_size(pandas_df, "Pandas dataframe (from Hatchet)")

    if(TIME):
        # Time
        temp_num=10000
        # Row traverse
        row_time_data = []
        for row in pandas_df.itertuples(): # itertuples is faster than iterrows according to docs.
            start = time.time_ns()
            for j in range(temp_num):
                for i in range(len(row)):
                    #str(row[i]) + str(j)
                    pass
            end = time.time_ns() - start
            row_time_data.append([row[0], end])
        row_traverse_df = pd.DataFrame(row_time_data, columns=['Row Index', 'Traversal Time'])
        print(row_traverse_df)
        # Column traverse
        column_time_data = []
        for column_name, column in pandas_df.iteritems():
            start = time.time_ns()
            for j in range(temp_num):
                for i in range(len(column)):
                    a = column[i]
            end = time.time_ns() - start
            column_time_data.append([column_name, end])
        column_traverse_df = pd.DataFrame(column_time_data, columns=['Column Index', 'Traversal Time'])
        print(column_traverse_df)
        # Diagonal traverse (Snaking down the rows)
        row_size, column_size = pandas_df.shape
        start = time.time_ns()
        for j in range(temp_num):
            for i in range(row_size):
                a = pandas_df.iat[i,i%column_size]
        end = time.time_ns() - start
        print(f"Diagonal traverse time: {end}ns.")


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
        # Time
        pass

def arrow_eval(arrow_table):
    if(EXTRA_OUT):
        print(arrow_table)

    if(MEMORY):
        # Memory
        print_memory_size(arrow_table, "Arrow table")

    if(TIME):
        # Time
        pass


def main():
    dataset = "../../../data/lulesh-scaling/lulesh-annotation-profile-1core.json"
    
    pandas_df_from_hatchet = (helpers.prep_hatchet_gf(dataset)).dataframe # Hatchet graphframe.dataframe
    dask_df =  helpers.prep_dask_df(pandas_df_from_hatchet) # Pre-computed dask dataframe
    arrow_table = helpers.prep_arrow_table(pandas_df_from_hatchet) # Arrow table from pandas.

    print_separator("Pandas")
    pandas_eval(pandas_df_from_hatchet)

    print_separator("Dask")
    dask_eval(dask_df)

    print_separator("Arrow")
    arrow_eval(arrow_table)


main()