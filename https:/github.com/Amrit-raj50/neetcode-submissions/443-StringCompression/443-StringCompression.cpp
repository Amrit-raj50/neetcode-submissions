// Last updated: 31/07/2026, 19:41:11
class Solution {
public:
    int compress(vector<char>& chars) {
        // vector<char> v;
        string str = "";
        int count = 0;
        int c = 0;
        for(int i = 0 ; i < chars.size() ;){
            count = 1;
            for(int j = i + 1 ; j < chars.size() ; j++){
                if(chars[i] == chars[j]){
                    count++;
                }else
                break;
            }
            //    chars.insert(chars.begin(),count);
               
            //    chars.insert(chars.begin(),chars[i]);
            str += chars[i];
            if(count > 1){
                 str += to_string(count);
            }
           
            i += count;
        }
        chars.clear();
        for(int i = str.size()-1 ; i >= 0 ; i--){
            chars.insert(chars.begin(),str[i]);
        }
        return str.size();
    }
};