class Solution {
public:
    bool isAnagram(string s, string t) {
        map<int,int> m ;
        map<int,int> m1;
        if(s.size() != t.size()){
            return false;
        }

        for(int i = 0 ; i < s.size() ; i++){
            m[s[i]]++;
            m1[t[i]]++;
        }

       return m == m1;
    }
};
