class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        if(k == 1){
            return nums;
        }
        vector<int> rs;
        int l = 0 ; 
        int r = k-1;
        int m = nums[0];
        int idx = 0;
        for(int i = 0; i <= r ; i++){
            if(nums[i] > m){
                m = nums[i];
                idx = i;
            }
        }
        rs.push_back(m);
        l++;
        r++;
        while(r < nums.size()){
            // int mx = *max_element(nums.begin()+l,nums.begin()+r+1);
            if(idx < l){
               auto it = max_element(nums.begin() + l, nums.begin() + r + 1);

               m = *it;
               idx = it - nums.begin();
            }else if(nums[r] > m){
                m = nums[r];
                idx = r;
            }
            rs.push_back(m);
            l++;
            r++;
        }
        return rs;
    }
};
