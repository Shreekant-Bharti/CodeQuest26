def max_sum_subarray(arr, k):
    if len(arr) < k:
        return -1
    window_sum = 0
    for i in range(0, k):
        window_sum += arr[i]
    max_sum = window_sum
    for i in range(k, len(arr) ):
        window_sum += arr[i] - arr[i - k]
        max_sum = max(max_sum, window_sum)
    return max_sum
