class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> res;
        bool flag  = false;
        int i = 0 ;
        int j = numbers.size()-1;
        while(!flag){
            int rs = numbers[i] + numbers[j];
            if(rs == target){
                flag = true;
                res.push_back(i+1);
                res.push_back(j+1);
                break;
            }
            if(rs > target){
                j--;
            }else{
                i++;
            }
        }
        return res;
        
    }
};
