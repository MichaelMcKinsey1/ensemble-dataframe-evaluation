import sys
import os
import platform
import time
import pandas as pd
import numpy as np
from IPython.display import display
import hatchet as ht

dataset_dirname = "../../data/hpctoolkit-kripke-database-2589696"

gf = ht.GraphFrame.from_hpctoolkit(dataset_dirname)
#print(gf.dataframe.index.names)
#display(gf.dataframe)