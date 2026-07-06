// Last updated: 06/07/2026, 22:58:54
1class Solution {
2public:
3    vector<int> twoSum(vector<int>& nums, int target) {
4        
5        unordered_map<int,int>mp;
6        for(int i = 0; i < nums.size() ; i++){
7            int diff = target - nums[i];
8            if(mp.find(diff) != mp.end()){
9                return {mp[diff],i};
10            }
11            mp[nums[i]] = i;
12        }
13        return {};
14    }
15};