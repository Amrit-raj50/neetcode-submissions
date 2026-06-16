// Last updated: 16/06/2026, 14:11:43
class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> rs;
        for(int i= 0 ; i < words.size() ; i++){
            for(int j = 0 ; j < words[i].size() ; j++){
                if(x == words[i][j]){
                    rs.push_back(i);
                    break;
                }
            }
        }
        return rs;
    }
};