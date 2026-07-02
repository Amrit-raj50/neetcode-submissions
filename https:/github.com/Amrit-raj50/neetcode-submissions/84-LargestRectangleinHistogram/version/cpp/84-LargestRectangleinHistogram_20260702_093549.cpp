// Last updated: 02/07/2026, 09:35:49
1class Solution {
2public:
3    int largestRectangleArea(vector<int>& heights) {
4        stack<int> st;
5        int n = heights.size();
6        int maxArea = 0;
7
8        for (int i = 0; i <= n; i++) {
9
10            while (!st.empty() && (i == n || heights[st.top()] >= heights[i])) {
11
12                int height = heights[st.top()];
13                st.pop();
14
15                int right = i;
16
17                int left;
18                if (st.empty())
19                    left = -1;
20                else
21                    left = st.top();
22
23                int width = right - left - 1;
24
25                maxArea = max(maxArea, height * width);
26            }
27
28            st.push(i);
29        }
30
31        return maxArea;
32    }
33};