class Solution {
public:
    int maxArea(vector<int>& heights) {
        // map<int,int> m;
        // for(int i = 0 ; i < heights.size() ; i++){
        //     m[heights[i]] = i;
        // }

        int m = 0;
        int left = 0 ; 
        int right = heights.size()-1;
        while(left < right){
            int width = right - left ;
            int area = min(heights[left],heights[right])*width;

            m = max(m,area);

            if(heights[left] <= heights[right]){
                left++;
            }else{
                right--;
            }
        }
return m;
    }
};
