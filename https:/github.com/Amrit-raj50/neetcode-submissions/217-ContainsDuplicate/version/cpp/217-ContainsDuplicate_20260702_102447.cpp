// Last updated: 02/07/2026, 10:24:47
1class Solution {
2public:
3    bool containsDuplicate(vector<int>& nums) {
4        set<int> s;
5        bool flag = false;
6
7        for(int i = 0 ; i < nums.size() ; i++){
8            if(!s.count(nums[i])){
9                s.insert(nums[i]);
10            }else{
11                flag = true;
12                break;
13            }
14        }
15        return flag;
16    }
17};