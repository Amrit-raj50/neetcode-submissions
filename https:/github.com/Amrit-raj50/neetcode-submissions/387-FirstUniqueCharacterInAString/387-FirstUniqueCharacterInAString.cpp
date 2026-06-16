// Last updated: 16/06/2026, 14:12:54
class Solution {
public:
    int firstUniqChar(string s) {
        // int idx;
        // bool flag = false;
        // for(int i = 0 ; i < s.length() ; i++){
        //     int count = 0;
        //     for(int j = 0 ; j < s.length() ; j++){
        //         if(s[i] == s[j]){
        //             count++;
        //         }
        //     }
        //     if(count == 1){
        //         flag = true;
        //         idx = i;
        //         break;
        //     }
        // }
        // if(!flag){
        //     idx = -1;
        // }
        
        // return idx;

        unordered_map<char,int>freq;

        for(char c : s){
            freq[c]++;
        }

        for(int i = 0 ; i < s.length() ; i++){
            if(freq[s[i]] == 1){
                return i;
            }
        }

        return -1;
        
    }
};