#include <bits/stdc++.h>

using namespace std;
int maxsumsubarray(vector<int>& arr, int k) {
    if(arr.size() < k) return -1;
    int windowsum = 0;
    for(int i=0; i<k; i++) {
        windowsum += arr[i];
    }
    int maxsum = windowsum;
    for(int i=k; i<arr.size(); i++) {
        windowsum += (arr[i] - arr[i-k]);
        maxsum = max(maxsum, windowsum);
    }
    return maxsum;
}
