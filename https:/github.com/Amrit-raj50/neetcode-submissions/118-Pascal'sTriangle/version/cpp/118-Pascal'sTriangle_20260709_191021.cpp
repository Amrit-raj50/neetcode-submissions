// Last updated: 09/07/2026, 19:10:21
1class Solution {
2public:
3    vector<vector<int>> generate(int numRows) {
4        vector<vector<int>> res;
5        for(int i = 0; i < numRows ; i++){
6            res.push_back(vector<int>(i+1));
7            for(int j = 0 ; j <= i ; j++){
8                if(j == 0 || j == i){
9                    res[i][j] = 1;
10                }else{
11                    res[i][j] = res[i-1][j-1] + res[i-1][j];
12                }
13            }
14        }
15        return res;
16    }
17};