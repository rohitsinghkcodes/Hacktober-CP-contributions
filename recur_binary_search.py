in_value = int(input())
_ = input()
in_array = [int(i) for i in input().split()]
def binary_search(value, array):
    if len(array) < 1:
        return -1
    return binary_search_helper(value, array, 0, len(array)-1)

def binary_search_helper(value, array, low, high):
    if low > high:
        return -1
    
    mid = low + (high - low) // 2
    mid_value = array[mid]
    if mid_value == value:
        return mid
    elif mid_value < value:
        return binary_search_helper(value, array, mid + 1, high)
    else:
        return binary_search_helper(value, array, low, mid - 1)
    
print(binary_search(in_value, in_array))
