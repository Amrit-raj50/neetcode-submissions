// Last updated: 16/06/2026, 14:11:48
class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> leftSum;
        vector<int> rightSum;
        vector<int> answer;

        for(int i = 0 ; i < nums.size() ; i++){
            int sum = 0;
            for(int j = i+1 ; j < nums.size() ; j++){
                sum += nums[j];
            }
            // leftSum.insert(leftSum.begin(),sum);
            leftSum.push_back(sum);
        }
        

         for(int i = nums.size()-1 ; i >= 0 ; i--){
            int sum = 0;
            for(int j = i - 1 ; j >= 0 ; j--){
                sum += nums[j];
            }
            rightSum.insert(rightSum.begin(),sum);
        }

        for(int k = 0 ; k < nums.size() ; k++){
            answer.push_back(abs(leftSum[k]-rightSum[k]));
        }

        return answer;
    }
};