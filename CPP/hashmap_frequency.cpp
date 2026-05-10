#include <vector>
#include <unordered_map>
using namespace std;
unordered_map<int, int> countFrequencies(vector<int>& arr) {
    // vector<int> freq;
    unordered_map<int,int>freq;
    for(int i=0; i<arr.size(); i++) { // i<=arr.size()-1
        // int num = arr[i];
        // if(freq.count(num)) {
        //     freq[num] += 1; // freq should be added on after finding the same element
        // } else {
        //     freq[num] = 0;
        // }
        freq[arr[i]]++;
    }
    return freq;
}
