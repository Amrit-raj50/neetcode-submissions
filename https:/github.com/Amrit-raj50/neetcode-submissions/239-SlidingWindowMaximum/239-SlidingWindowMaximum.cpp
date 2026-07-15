// Last updated: 15/07/2026, 21:43:27
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
       int l = 0;
       int r = 0;
       int n = nums.size();
       vector<int> rs(n-k+1);
       deque<int> q;
       while(r < nums.size()){
        while(!q.empty() && nums[q.back()] < nums[r]){
            q.pop_back();
        }
        q.push_back(r);
        if(l > q.front()){
            q.pop_front();
        }
        if((r+1) >= k){
            rs[l] = nums[q.front()];
            l++;
        }
        r++;
       }
       return rs;
    }
};
