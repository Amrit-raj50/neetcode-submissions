// Last updated: 06/07/2026, 23:00:56
1class Solution {
2public:
3    vector<int> twoSum(vector<int>& nums, int target) {
4        unordered_map<int,int> m;
5     for(int i = 0 ; i < nums.size() ; i++){
6        int left = target - nums[i];
7
8        if(m.find(left) != m.end()){
9            return {m[left] , i};
10        }
11
12        m[nums[i]] = i;
13     }
14     return {};
15    }
16};