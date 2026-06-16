// Last updated: 16/06/2026, 14:11:44
class Solution {
public:
    int maxFreqSum(string s) {
        int v = 0;
        int c = 0;
        unordered_map<char,int> mp;
        for(int i = 0 ; i < s.size() ; i++){
            mp[s[i]]++;
        }

        for(auto it : mp){
            if(it.first == 'a' ||it.first == 'e' ||it.first == 'i' ||it.first == 'o' ||it.first == 'u' ||it.first == 'A' ||it.first == 'E' ||it.first == 'I' ||it.first == 'O' ||it.first == 'U' ){
                if(it.second > v){
                v = it.second;
            }
            }else{
                if(it.second > c){
                    c = it.second;
                }
            }
        }
        // set<char> st; 
        // for(int i = 0 ; i < s.size() ; i++){
        //     st.insert(s[i]);
        // }
        // for(char ch : st){
        //     if(ch == 'a' ||ch == 'e' ||ch == 'i' ||ch == 'o' ||ch == 'u' ||ch == 'A' ||ch == 'E' ||ch == 'I' ||ch == 'O' ||ch == 'U' ){
        //         v++;
        //         // s.erase(i,1);
        //     }else{
        //         c++;
        //     }
        // }
        return v+c;
    }
};