in_value = int(input())
_ = input()
in_array = [int(i) for i in input().split()]
def binary_search(value, array):
    low, high = 0, len(array)-1
    while low <= high:
        mid = low + (high - low) // 2
        mid_value = array[mid]
        if mid_value == value:
            return mid
        elif mid_value < value:
            low = mid + 1
        else:
            high = mid - 1
    return -1
print(binary_search(in_value, in_array))
