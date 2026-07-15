// Last updated: 15/07/2026, 21:42:57
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l = 0 , h = 0 , m = 0, Max = 0,count = 1;
        while(h < nums.size()){
            if(nums[h] == 0){
                if(k >= count){
                    m++;
                    h++;
                    count++;
                }else{
                    count = 1;
                    l++;
                    h = l;
                    Max = max(m,Max);
                    m = 0;
                }
            }else{
                m++;
                h++;
            }
        }
        Max = max(m,Max);
        return Max;
    }
};