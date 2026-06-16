// Last updated: 16/06/2026, 14:12:01
class Solution {
public:
    string capitalizeTitle(string title) {
        string ans = "";
        string word = "";

        for (int i = 0; i <= title.size(); i++) {

            if (i == title.size() || title[i] == ' ') {

                if (word.size() <= 2) {
                    for (char &ch : word) {
                        ch = tolower(ch);
                    }
                } else {
                    word[0] = toupper(word[0]);

                    for (int j = 1; j < word.size(); j++) {
                        word[j] = tolower(word[j]);
                    }
                }

                ans += word;

                if (i != title.size()) {
                    ans += ' ';
                }

                word = "";
            }
            else {
                word += title[i];
            }
        }

        return ans;
    }
};