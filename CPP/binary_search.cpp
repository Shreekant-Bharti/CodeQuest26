#include <vector>
#include<iostream>
using namespace std;
int binarySearch(vector<int>& arr, int target) {
    int low = 0;//low is initially 1;
    int high = arr.size() - 1;
    //Low<=high not low<high
    while(low <= high) {
        int mid = low+(high-low)/2; // mid = high-low/2;
        if(arr[mid] == target)
            return mid;
        else if(arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1; // high = mid + 1;
    }
    return -1;
}
