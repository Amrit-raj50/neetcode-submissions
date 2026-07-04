// Last updated: 04/07/2026, 07:33:14
1class Solution {
2public:
3    int maxArea(vector<int>& height) {
4        int m = 0 ; 
5        int left = 0 ;
6        int right = height.size()-1;
7        while(left < right){
8            int width = right - left ;
9            int area = min(height[left],height[right])*width;
10
11            m = max(m,area);
12            if(height[left] <= height[right]){
13                left++;
14            }else{
15                right--;
16            }
17        }
18        return m;
19    }
20};