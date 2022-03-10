import hatchet as ht

dataset_dirname = "../../../data/hpctoolkit-kripke-database-2589696"

gf = ht.GraphFrame.from_hpctoolkit(dataset_dirname)
#print(gf.dataframe.index.names)
#display(gf.dataframe)