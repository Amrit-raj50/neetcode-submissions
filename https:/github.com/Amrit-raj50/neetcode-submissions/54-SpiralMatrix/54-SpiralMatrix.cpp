// Last updated: 31/07/2026, 19:43:00
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> v;
        int m = matrix.size();
        int n = matrix[0].size();
        // int n1 = matrix[0].size();
        int l = 0;
        int r = n-1;
        int t = 0;
        int b = m-1;
        while(l <= r && t <= b){
            for(int j = l ; j <= r ; j++){
                v.push_back(matrix[t][j]);
            }
            t++;

            for(int j = t ; j <= b ; j++){
                v.push_back(matrix[j][r]);
            }
            r--;

            if(t <= b){
                for(int j = r ; j >= l ; j--){
                v.push_back(matrix[b][j]);
            }
            b--;
            }
            if(l <= r){
                 for(int j = b ; j >= t ; j--){
                v.push_back(matrix[j][l]);
            }
            l++;
            }
        }
        return v;
    }
};