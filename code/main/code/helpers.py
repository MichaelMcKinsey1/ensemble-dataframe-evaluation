import hatchet as ht
import pyarrow as pa
from dask.dataframe import from_pandas


def prep_hatchet_gf(dataset, reader_type):
    # Read in data
    if reader_type=="hpc":
        gf = ht.GraphFrame.from_hpctoolkit(dataset)
    elif reader_type=="lulesh":
        gf = ht.GraphFrame.from_caliper_json(dataset)
    else:
        print("Error: Unknown dataset type.")
        exit()

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


def print_separator(name):
    separator_str = "----------"
    print(f"\n\n\n{separator_str}\n{name}\n{separator_str}\n\n\n")
    
