// Last updated: 16/06/2026, 14:13:05
class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> res;
        string r = "";
        int count = 0;
        int fs;
        if(nums.empty()){
            return res;
        }else{
            fs = nums[0];
        }
        for(int i = 0 ; i < nums.size() ; i++){
            if(count == 0 && i == nums.size()-1){
                r = to_string(nums[i]);
                res.push_back(r);
            }
            else{
                if(i != nums.size()-1){
                     if(nums[i]+1 == nums[i+1]){
                          count++;
                     }
                else{
                      if(count == 0){
                         r = to_string(nums[i]);
                         res.push_back(r);
                         fs = nums[i+1];
                        count = 0;
                     }
                      else{
                         r = to_string(fs) + "->" + to_string(nums[i]);
                         res.push_back(r);
                         fs = nums[i+1];
                     count = 0;
                     }    
                }
            }else{
                r = to_string(fs) + "->" + to_string(nums[i]);
                 res.push_back(r);
            }
            
                }
        }
        return res;
        
    }
};