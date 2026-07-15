// Last updated: 15/07/2026, 21:44:08
class Solution {
public:
    int maxArea(vector<int>& height) {
        int m = 0 ; 
        int left = 0 ;
        int right = height.size()-1;
        while(left < right){
            int width = right - left ;
            int area = min(height[left],height[right])*width;

            m = max(m,area);
            if(height[left] <= height[right]){
                left++;
            }else{
                right--;
            }
        }
        return m;
    }
};