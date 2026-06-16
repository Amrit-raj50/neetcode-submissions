// Last updated: 16/06/2026, 14:12:43
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> freq;
        for(int i : arr){
            freq[i]++;
        }
        unordered_set<int> count;
        for(auto& i : freq){
            count.insert(i.second);
        }

        return freq.size() == count.size();
    }
};