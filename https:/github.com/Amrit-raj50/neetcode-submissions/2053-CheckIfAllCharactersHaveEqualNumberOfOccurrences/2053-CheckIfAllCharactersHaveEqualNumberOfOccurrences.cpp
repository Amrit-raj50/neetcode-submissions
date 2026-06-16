// Last updated: 16/06/2026, 14:12:06
class Solution {
public:
    bool areOccurrencesEqual(string s) {
        map<char,int> m;
        set<int> st;
        for(int i = 0 ; i < s.size() ; i++){
            m[s[i]]++;
        }

        for(auto it : m){
            st.insert(it.second);
        }

        if(st.size() > 1){
            return false;
        }else{
            return true;
        }
    }
};