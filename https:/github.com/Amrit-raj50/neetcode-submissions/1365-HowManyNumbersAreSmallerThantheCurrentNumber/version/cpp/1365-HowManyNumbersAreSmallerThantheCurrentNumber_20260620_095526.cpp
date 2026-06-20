// Last updated: 20/06/2026, 09:55:26
1class Solution {
2public:
3    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
4        vector<int> rs;
5        int count = 0;
6        for(int i = 0 ; i < nums.size() ; i++){
7            count = 0;
8            for(int j = 0 ; j < nums.size() ;j++){
9                if(i != j){
10                    if(nums[i] > nums[j]){
11                        count++;
12                    }
13                }
14            }
15            rs.push_back(count);
16        }
17        return rs;
18    }
19};