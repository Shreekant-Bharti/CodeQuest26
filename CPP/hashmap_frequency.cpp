#include <vector>
#include <unordered_map>
using namespace std;
unordered_map<int, int> countFrequencies(vector<int>& arr) {
    unordered_map<int,int> freq;
    for(int i=0; i<arr.size(); i++) {
        int num = arr[i];
        if(freq.count(num)) {
            freq[num]++;
        } else {
            freq[num] = 1;
        }
    }
    return freq;
}
