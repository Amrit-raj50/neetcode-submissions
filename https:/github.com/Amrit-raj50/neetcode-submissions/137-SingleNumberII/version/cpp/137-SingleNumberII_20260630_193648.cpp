// Last updated: 30/06/2026, 19:36:48
1class Solution {
2public:
3    int singleNumber(vector<int>& nums) {
4         for(int i = 0 ; i < nums.size() ; i++){
5            int count = 0;
6            for(int j = 0 ; j < nums.size() ; j++){
7                if((nums[i] == nums[j]) && (i != j)){
8                    count++;
9                }
10            }
11            if(count == 0){
12                return nums[i];
13            }
14        }
15        return -1;
16    }
17};
18
19