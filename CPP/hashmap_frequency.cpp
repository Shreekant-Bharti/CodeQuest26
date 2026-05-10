#include <vector>
#include <unordered_map>
using namespace std;
unordered_map<int, int> countFrequencies(vector<int>& arr) {
    for(int i=0; i<arr.size(); i++) {
        countFrequencies[arr[i]]+=1;
    }
    return countFrequencies;
}
