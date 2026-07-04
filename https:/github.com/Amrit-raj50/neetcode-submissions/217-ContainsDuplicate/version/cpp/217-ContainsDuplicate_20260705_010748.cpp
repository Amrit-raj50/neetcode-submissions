// Last updated: 05/07/2026, 01:07:48
1class Solution {
2public:
3    bool containsDuplicate(vector<int>& nums) {
4        unordered_set<int> s;
5        bool flag = false;
6        for(int i = 0 ; i < nums.size() ; i++){
7            if(!s.count(nums[i])){
8                s.insert(nums[i]);
9            }else{
10                flag = true;
11                break;
12            }
13        }
14        return flag;
15    }
16};