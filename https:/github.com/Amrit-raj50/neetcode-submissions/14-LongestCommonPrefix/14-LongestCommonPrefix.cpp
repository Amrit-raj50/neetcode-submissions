// Last updated: 16/06/2026, 14:13:45
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        // if(strs.empty())
        // return "";
        // string word = "";
        
        // char  ch = strs[0][0];
        // bool flag = false;
        // int j = 0;
        // for(int i = 1 ; i < strs.size() ; i++){
            
        //   if(ch == strs[i][j]){
        //     flag = true;
        //   }
        //   else{
        //     flag = false;
        //   }

        //   if(flag && (i == (strs.size()-1))){
        //     word.push_back(ch);
        //     j++;
        //     ch = strs[0][j];
        //     i = 1;
        //   }
        //   }

        //   if(strs.size() == 1){
        //     word = strs[0];
        //   }
        //   if(word.empty())
        //   return "";

        string subString = strs[0];
        for(int i = 1 ; i < strs.size();i++){
            while(strs[i].find(subString) != 0){
                subString.pop_back();
            }
        }
          return subString;
        }
    };