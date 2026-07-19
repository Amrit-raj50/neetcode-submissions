// Last updated: 19/07/2026, 21:43:24
class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int r1 = matrix.size();
        int c1 = matrix[0].size();
        vector<vector<int>> res;
        vector<int> prt;
        for(int c = 0 ; c < c1 ; c++){
            for(int r = 0 ; r < r1 ; r++){
                prt.push_back(matrix[r][c]);
            }
            res.push_back(prt);
            prt.clear();
        }
        return res;
    }
};