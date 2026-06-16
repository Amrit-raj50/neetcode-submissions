// Last updated: 16/06/2026, 14:12:47
class Solution {
public:
    bool detectCapitalUse(string word) {
        int count = 0;
        bool flag = false;
        for(int i = 0 ; i < word.size() ; i++){
            if(isupper(word[i])){
                count++;
            }
        }
        if(count == word.size()){
            flag = true;
        }else if(count == 0){
            flag = true;
        }
        else{
            if((isupper(word[0])) && (count == 1)){
                flag = true;
            }
            else{
                flag = false;
            }
        }
        return flag;
    }
};