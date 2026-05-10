#include <vector>
#include <algorithm>
using namespace std;
int maxSumSubarray(vector<int>& arr, int k) {
    if(arr.size() < k) return -1;
    int windowSum = 0;
    for(int i=0; i<k; i++) {
        windowSum += arr[i];
    }
    int maxSum = windowSum;
    for(int i=1; i<=arr.size()-k; i++) {
        windowSum -= arr[i-1] + arr[arr.size()-k+i];
        maxSum = max(maxSum, windowSum);
    }
    return maxSum;
}
