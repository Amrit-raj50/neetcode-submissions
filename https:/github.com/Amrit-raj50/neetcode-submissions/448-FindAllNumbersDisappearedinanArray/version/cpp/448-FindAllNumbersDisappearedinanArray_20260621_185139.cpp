// Last updated: 21/06/2026, 18:51:39
1class Solution {
2public:
3    vector<int> findDisappearedNumbers(vector<int>& nums) {
4        sort(nums.begin(), nums.end());
5
6        vector<int> v;
7        int idx = 0;
8        int n = nums.size();
9
10        for (int i = 1; i <= n; i++) {
11            while (idx < n && nums[idx] < i) {
12                idx++;
13            }
14
15            if (idx >= n || nums[idx] != i) {
16                v.push_back(i);
17            }
18        }
19
20        return v;
21    }
22};