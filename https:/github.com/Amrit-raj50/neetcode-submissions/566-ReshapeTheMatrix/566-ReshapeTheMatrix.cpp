// Last updated: 16/07/2026, 20:42:05
class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<vector<int>> res;
        vector<int> p;
        vector<int> num;
        int r1 = mat.size();
        int c1 = mat[0].size();
        if(r1 * c1 != r * c){
            return mat;
        }
        for(int i = 0 ; i < r1 ; i++){
            for(int j = 0 ; j < c1 ; j++){
                num.push_back(mat[i][j]);
            }
        }
        int count = 0;
        for(int i = 0 ; i < r ; i++){
            for(int j = 0 ; j < c ; j++){
                p.push_back(num[count]);
                count++;
            }
            res.push_back(p);
            p.clear();
        }
        return res;
    }
};