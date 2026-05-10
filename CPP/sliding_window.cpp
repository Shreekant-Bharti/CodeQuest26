#include <vector>
#include <algorithm>
using namespace std;
int maxSumSubarray(vector<int>& arr, int k) {
    if(arr.size() < k) return -1;
    int windowSum = 0;
    for(int i=1; i<k; i++) {
        windowSum += arr[i];
    }
    int maxSum = windowSum;
    for(int i=k; i<arr.size(); i++) {
        windowSum += arr[i] + arr[i-k];
        maxSum = min(maxSum, windowSum);
    }
    return maxSum;
}
