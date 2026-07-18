// Last updated: 18/07/2026, 08:11:10
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum = 0;
        int r1 = mat.size();
        int c1 = mat[0].size();
        if(r1 == 1 && c1 == 1){
            sum = mat[0][0];
            return sum;
        }
        for(int i = 0 ; i < r1 ; i++){
            for(int j = 0 ; j < c1 ; j++){

                if(i == j){
                    sum += mat[i][j];
                }

                 if(i + j == r1-1){
                    sum += mat[i][j];
                }
            }
        }
        if(r1 % 2 == 1){
            sum = sum - mat[r1/2][r1/2];
        }
        return sum;
    }
};