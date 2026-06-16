// Last updated: 16/06/2026, 14:12:21
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
     vector<int> res;
     int x = 0;
     for(int i = 0 ; i < nums.size() ; i++){
        if(i % 2 == 0){
            res.push_back(nums[x]);
            x++;
        }else{
            res.push_back(nums[n]);
            n++;
        }
     }
     return res;
    }
};