// Last updated: 08/07/2026, 14:01:52
1class Solution {
2public:
3    vector<int> replaceElements(vector<int>& arr) {
4        int temp = 0;
5        int m = arr[arr.size()-1];
6        arr[arr.size()-1] = -1;
7        for(int i = arr.size()-2 ; i >= 0 ; i--){
8            temp = arr[i];
9            arr[i] = m;
10            m = max(m,temp);
11        } 
12        return arr;
13    }
14};