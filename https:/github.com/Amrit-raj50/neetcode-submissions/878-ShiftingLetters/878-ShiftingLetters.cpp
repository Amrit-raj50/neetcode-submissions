// Last updated: 15/07/2026, 21:43:01
class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        int n = shifts.size();

        for(int i = n - 2; i >= 0; i--){
            shifts[i] = (shifts[i] + shifts[i + 1]) % 26;
        }

        for(int i = 0; i < n; i++){
            int pos = s[i] - 'a';
            pos = (pos + shifts[i]) % 26;
            s[i] = pos + 'a';
        }

        return s;
    }
};