def count_frequencies(arr):
    freq = {}
    for num in arr:
        if num in freq:
            freq[num]+= 1
        else:
            freq[num] += 0
    return freq
