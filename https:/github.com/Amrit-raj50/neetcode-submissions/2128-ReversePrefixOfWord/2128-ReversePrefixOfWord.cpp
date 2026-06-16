// Last updated: 16/06/2026, 14:12:03
class Solution {
public:
    string reversePrefix(string word, char ch) {
        for(int i = 0 ; i < word.size(); i++){
            if(word[i] == ch){
                for(int j = 0 ; j < i ; j++){
                    char temp = word[i];
                    word[i] = word[j];
                    word[j] = temp;
                    i--;
                }
                break;
            }
        }
        return word;
    }
};