#include <vector>
#include <unordered_map>
using namespace std;
vector<int> countFrequencies(vector<int>& arr) {
    unordered_map<int,int> freq;
    vector<int> res;
    for(int i=0; i<arr.size(); i++) {
        int num = arr[i];
        if(freq.count(num)) {
            freq[num]+= 1;
        } else {
            freq[num] = 1;
        }
    }

    for(auto&p:freq){
        res.push_back(p.second);
    }
    return res;
}
