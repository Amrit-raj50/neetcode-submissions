// Last updated: 16/06/2026, 14:12:39
class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<string> rs;
        string result = words[0];
        int count = 0;
        // int idx1 , idx;
        for(char ch : result){
            count = 0;
            for(int i = 1 ; i < words.size() ; i++){
                // idx1 = i;
                for(int j = 0 ; j < words[i].size(); j++){
                    if(ch == words[i][j]){
                        count++;
                         words[i].erase(j, 1);
                        break;
                    }
                }
            }
            if(count == words.size()-1){
                 rs.push_back(string(1,ch));
            }
        }
        return rs;
    }
};