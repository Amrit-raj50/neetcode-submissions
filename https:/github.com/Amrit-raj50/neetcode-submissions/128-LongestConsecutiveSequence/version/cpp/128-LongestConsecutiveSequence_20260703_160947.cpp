// Last updated: 03/07/2026, 16:09:47
1class Solution {
2public:
3    int longestConsecutive(vector<int>& nums) {
4        if(nums.empty()){
5            return 0;
6        }
7        vector<int> rs;
8        sort(nums.begin(),nums.end());
9        int first = nums[0];
10        int count = 1;
11        for(int i = 1 ; i < nums.size() ; i++){
12            if(first == nums[i]){
13                continue;
14            }
15            if(first+1 == nums[i]){
16                count++;
17                first = nums[i];
18            }else{
19                rs.push_back(count);
20                count = 1;
21                first = nums[i];
22            }
23        }
24        rs.push_back(count);
25
26        sort(rs.begin(),rs.end(),greater<int>());
27         return rs[0];
28    }
29};
30