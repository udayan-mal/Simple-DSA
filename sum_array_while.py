def sum_array(arr):
    total = 0
    i = 0
    while i < len(arr):
        total += arr[i]
        i += 1
    return total

if __name__ == "__main__":
    arr = [12, 3, 4, 15]
    print("Sum of given array is", sum_array(arr))
