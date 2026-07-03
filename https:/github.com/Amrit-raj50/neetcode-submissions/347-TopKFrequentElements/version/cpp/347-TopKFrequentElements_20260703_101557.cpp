// Last updated: 03/07/2026, 10:15:57
// i have used .. map with multimap for storing duplicate keys
1class Solution {
2public:
3    vector<int> topKFrequent(vector<int>& nums, int k) {
4        map<int,int> m ;
5        multimap<int,int> m1;
6        vector<int> rs;
7        int count = 1;
8
9        for(int i = 0 ; i < nums.size() ; i++){
10            m[nums[i]]++;
11        }
12        for(auto it = m.begin() ; it != m.end() ; it++){
13            m1.insert({it->second,it->first});
14        }
15        for(auto it = m1.rbegin() ; count <= k ; it++){
16            rs.push_back(it->second);
17            count++;
18        }
19
20        return rs;
21    }
22};