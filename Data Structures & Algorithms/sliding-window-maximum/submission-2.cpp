class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        if(k == 1){
            return nums;
        }
        vector<int> rs;
        int l = 0 ; 
        int r = k-1;
        int m = 0;
        while(r < nums.size()){
            int mx = *max_element(nums.begin()+l,nums.begin()+r+1);
            rs.push_back(mx);
            l++;
            r++;
        }
        return rs;
    }
};
