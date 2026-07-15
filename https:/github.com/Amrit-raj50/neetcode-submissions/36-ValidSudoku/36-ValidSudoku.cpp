// Last updated: 15/07/2026, 21:44:01
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<set<int>> row(9);
        vector<set<int>> col(9);
        vector<set<int>> box(9);

        for(int r = 0 ; r < 9 ; r++){
            for(int c = 0 ; c < 9 ; c++){

                char val = board[r][c];

                if(val == '.'){
                    continue;
                }

                if(row[r].count(val)){
                    return false;
                }
                row[r].insert(val);

                if(col[c].count(val)){
                    return false;
                }
                col[c].insert(val);

                int idx = (r/3) * 3 + (c/3);
                if(box[idx].count(val)){
                    return false;
                } 
                box[idx].insert(val);
            }
        }
        return true;
    }
};
