import java.util.*;
class Solution {
    public HashMap<Integer, Integer> countFrequencies(int[] arr) {
        HashMap<Integer, Integer> freq = new HashMap<>();
        for(int i=0; i<arr.length; i++) {
            int num = arr[i];
            if(freq.containsKey(num)) {
                freq.put(num, freq.get(num) + 1);
            } else {
                freq.put(num, 1);
            }
        }
        return freq;
    }
}
//4 
