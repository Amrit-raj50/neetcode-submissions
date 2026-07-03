// Last updated: 03/07/2026, 11:49:10
/*
 * TC --> log(n)
 * i have used .... pre and post and at the end .... multiply elements from both the array
*/

1class Solution {
2public:
3    vector<int> productExceptSelf(vector<int>& nums) {
4        vector<int> rs(nums.size(),1);
5        int pre = 1 , post = 1;
6
7        for(int i = 0 ; i < nums.size() ; i++){
8            rs[i] = pre;
9            pre = pre * nums[i];
10        }
11
12        for(int i = nums.size()-1 ; i >= 0 ; i--){
13            rs[i] = rs[i]*post;
14            post = post * nums[i];
15        }
16
17        return rs;
18    }
19};