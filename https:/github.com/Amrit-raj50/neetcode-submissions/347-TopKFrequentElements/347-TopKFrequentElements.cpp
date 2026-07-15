// Last updated: 15/07/2026, 21:43:17
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> m ;
        multimap<int,int> m1;
        vector<int> rs;
        int count = 1;

        for(int i = 0 ; i < nums.size() ; i++){
            m[nums[i]]++;
        }
        for(auto it = m.begin() ; it != m.end() ; it++){
            m1.insert({it->second,it->first});
        }
        for(auto it = m1.rbegin() ; count <= k ; it++){
            rs.push_back(it->second);
            count++;
        }

        return rs;
    }
};