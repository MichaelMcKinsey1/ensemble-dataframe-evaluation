import time
import pandas as pd
import pyarrow as pa
import helpers
from helpers import print_memory_size, print_separator

EXTRA_OUT=False
MEMORY=False
TIME=True
EXTRA_ITER=1000

# Pandas display options for cli.
pd.set_option('display.width', 1000)
pd.set_option('display.max_rows', 500)
pd.set_option('display.max_columns', 500)

def pandas_eval(pandas_df):
    if(EXTRA_OUT):
        print(pandas_df)

    if(MEMORY):
        print_memory_size(pandas_df, "Pandas dataframe (from Hatchet)")

    if(TIME):
        # Row traverse
        row_time_data = []
        for row in pandas_df.itertuples(): # itertuples is faster than iterrows according to docs.
            start = time.time_ns() # The time.time_ns() resolution is 3 times better than the time.time() resolution on Linux and Windows. [https://peps.python.org/pep-0564/]
            for j in range(EXTRA_ITER):
                for i in range(len(row)):
                    str(row[i])
            end = time.time_ns() - start
            row_time_data.append([row[0], end])
        row_traverse_df = pd.DataFrame(row_time_data, columns=['Row Index', 'Traversal Time'])
        print(row_traverse_df)
        # Column traverse
        column_time_data = []
        for column_name, column in pandas_df.iteritems():
            start = time.time_ns()
            for j in range(EXTRA_ITER):
                for i in range(len(column)):
                    column[i]
            end = time.time_ns() - start
            column_time_data.append([column_name, end])
        column_traverse_df = pd.DataFrame(column_time_data, columns=['Column Index', 'Traversal Time'])
        print(column_traverse_df)
        # Diagonal traverse (Snaking down the rows)
        row_size, column_size = pandas_df.shape
        start = time.time_ns()
        for j in range(EXTRA_ITER):
            for i in range(row_size):
                pandas_df.iat[i,i%column_size]
        end = time.time_ns() - start
        print(f"Diagonal traverse time: {end}s.")


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
        # Row traverse
        row_time_data = []
        for row in computed_ddf.itertuples():
            start = time.time_ns()
            for j in range(EXTRA_ITER):
                for i in range(len(row)):
                    str(row[i])
            end = time.time_ns() - start
            row_time_data.append([row[0], end])
        row_traverse_df = pd.DataFrame(row_time_data, columns=['Row Index', 'Traversal Time'])
        print(row_traverse_df)
        # Column traverse
        column_time_data = []
        for column_name, column in computed_ddf.iteritems():
            start = time.time_ns()
            for j in range(EXTRA_ITER):
                for i in range(len(column)):
                    column[i]
            end = time.time_ns() - start
            column_time_data.append([column_name, end])
        column_traverse_df = pd.DataFrame(column_time_data, columns=['Column Index', 'Traversal Time'])
        print(column_traverse_df)
        # Diagonal traverse (Snaking down the rows)
        row_size, column_size = computed_ddf.shape
        start = time.time_ns()
        for j in range(EXTRA_ITER):
            for i in range(row_size):
                computed_ddf.iat[i,i%column_size]
        end = time.time_ns() - start
        print(f"Diagonal traverse time: {end}s.")

def arrow_eval(arrow_table):
    if(EXTRA_OUT):
        print(arrow_table)

    if(MEMORY):
        # Memory
        print_memory_size(arrow_table, "Arrow table")

    if(TIME):
        # Row traverse
        row_time_data = []
        for k in range(len(arrow_table.column(0))):
            start = time.time_ns()
            for j in range(EXTRA_ITER):
                for i in range(len(arrow_table.columns)):
                    str(arrow_table.column(i)[k])
            end = time.time_ns() - start
            row_time_data.append([k, end])
        row_traverse_df = pd.DataFrame(row_time_data, columns=['Row Index', 'Traversal Time'])
        print(row_traverse_df)
        # Column traverse
        column_time_data = []
        total = 0
        for k in range(len(arrow_table.columns)):
            column = arrow_table.column(k)
            start = time.time_ns()
            for j in range(EXTRA_ITER):
                for i in range(len(column)):
                    str(column[i])
            end = time.time_ns() - start
            column_time_data.append([arrow_table.column_names[k], end])
        column_traverse_df = pd.DataFrame(column_time_data, columns=['Column Index', 'Traversal Time'])
        print(column_traverse_df)
        # Diagonal traverse (Snaking down the rows)
        column_size = len(arrow_table.columns)
        start = time.time_ns()
        for j in range(EXTRA_ITER):
            for i in range(len(arrow_table.column(0))):
                str(arrow_table.column(i%column_size)[i])
        end = time.time_ns() - start
        print(f"Diagonal traverse time: {end}s.")


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