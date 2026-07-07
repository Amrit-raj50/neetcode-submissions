// Last updated: 08/07/2026, 00:16:03
1class Solution {
2public:
3    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
4       int l = 0;
5       int r = 0;
6       int n = nums.size();
7       vector<int> rs(n-k+1);
8       deque<int> q;
9       while(r < nums.size()){
10        while(!q.empty() && nums[q.back()] < nums[r]){
11            q.pop_back();
12        }
13        q.push_back(r);
14        if(l > q.front()){
15            q.pop_front();
16        }
17        if((r+1) >= k){
18            rs[l] = nums[q.front()];
19            l++;
20        }
21        r++;
22       }
23       return rs;
24    }
25};
26