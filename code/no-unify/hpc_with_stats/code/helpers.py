import sys
import hatchet as ht
import pyarrow as pa
from dask.dataframe import from_pandas

MB=1000000


def prep_hatchet_gf(dataset):
    # Read in data
    gf = ht.GraphFrame.from_hpctoolkit(dataset)

    # Reset multindex ["rank", "node"] and set index to be "nid".
    df_multiindex = ["rank", "node"]
    new_index = "nid"
    gf.dataframe.reset_index(df_multiindex[0], drop=True, inplace=True)
    gf.dataframe.reset_index(df_multiindex[1], inplace=True)
    gf.dataframe.set_index(new_index, inplace=True)

    return gf
    

def prep_dask_df(pandas_df):
    return from_pandas(pandas_df, npartitions=100)


def prep_arrow_table(pandas_df):
    # Get rid of node type
    pa_friendly_df = pandas_df
    pa_friendly_df['node'] = pa_friendly_df['node'].astype(str)

    # Create table
    table = pa.Table.from_pandas(pa_friendly_df)
    return table


def print_memory_size(obj, obj_name):
    obj_size = sys.getsizeof(obj)
    print(f"Size of {str(obj_name)}: {str(obj_size)} bytes. {str(obj_size/MB)} MB.")


def print_separator(name):
    separator_str = "----------"
    print(f"\n\n\n{separator_str}\n{name}\n{separator_str}\n\n\n")


def calc_statistics(abs_min, abs_max, new_num):
    if new_num < abs_min:
        abs_min = new_num
    if new_num > abs_max:
        abs_max = new_num
    return abs_min, abs_max
    
