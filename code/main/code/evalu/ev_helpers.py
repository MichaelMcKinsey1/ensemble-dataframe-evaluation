import sys

MB=1000000

def print_memory_size(obj, obj_name):
    obj_size = sys.getsizeof(obj)
    print(f"Size of {str(obj_name)}: {str(obj_size)} bytes. {str(obj_size/MB)} MB.")


def calc_statistics(abs_min, abs_max, new_num):
    if new_num < abs_min:
        abs_min = new_num
    if new_num > abs_max:
        abs_max = new_num
    return abs_min, abs_max