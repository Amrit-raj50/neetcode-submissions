// Last updated: 30/07/2026, 22:21:36
class Solution {
public:
    string compressedString(string word) {
        string comp = "";
        for(int i = 0 ; i < word.size() ; i++){
            int count = 1;
            for(int j = i+1 ; j < word.size() ; j++){
                if(word[i] == word[j]){
                    count++;
                    if(count > 9){
                        count--;
                        break;
                    }
                }else{
                    break;
                }
            }
            comp += to_string(count);
            comp += word[i];
            i += count-1;
        }
        return comp;
    }
};