// Last updated: 16/06/2026, 14:12:49
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> rs;
        map<char,int> m1;
        map<char,int> m2;
        int idx ,count = 0;

        for(int i = 0 ; i < p.size() ; i++){
            m1[p[i]]++;
        }
        for(int i = 0 ; i < s.size() ;){
            m2[s[i]]++;
            count++;
            if(count == p.size()){
                if(m1 == m2){
                idx = i-(p.size()-1);
                rs.push_back(idx);
            }
                m2.clear();
                count = 0;

                i = i - (p.size() - 2);
            } else{
                i++;
            }
        }

        return rs;
    }
};