def bubble_sort(arr):
    n = len(arr)
    for i in range(n):
        for j in range(0, n - 1):
            if arr[j] < arr[j+1]:
                arr[j] = arr[j+1]
                
        return arr
