// Last updated: 16/06/2026, 14:12:11
class Solution {
public:
    bool checkIfPangram(string sentence) {
        set<int> s;
        for(int i= 0 ; i < sentence.size() ; i++){
            s.insert(sentence[i]);
        }
       return s.size()==26;
    }
};