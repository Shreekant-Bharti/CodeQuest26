#include <vector>
#include<iostream>
using namespace std;
void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    for(int i=0; i<n-1; i++) {
        for(int j=i+1; j<n; j++) { // j start with i+1 not with 0
            if(arr[i] > arr[j]) { //arr[i] not arr[j] and arr[i]>arr[j] not >arr[j+1]
                int temp = arr[i];  //arr[i] not arr[j]
                arr[i] = arr[j];
                arr[j] = temp; //index out of range if arr[j+1]
            }
        }
        return arr; // will return array itself at the end
    }
}
