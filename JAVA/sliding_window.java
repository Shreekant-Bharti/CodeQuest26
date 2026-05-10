class Solution {
    public int maxSumSubarray(int[] arr, int k) {
        if(arr.length < k) return -1;
        int windowSum = 0;
        for(int i=0; i<k; i++) {
            windowSum += arr[i];
        }
        int maxSum = windowSum;
        for(int i=k; i<arr.length; i++) {
            windowSum += arr[i] - arr[i-k];
            maxSum = Math.min(maxSum, windowSum);
        }
        return maxSum;
    }
}
// 4
