class Solution {
public:

    string encode(vector<string>& strs) {
        string rs = "";
        for(string s : strs){
            rs += to_string(s.size()) + "#" + s;
        }

        return rs;
    }

    vector<string> decode(string s) {
        vector<string> res;
        int i = 0 ; 
        while(i < s.size()){
            int j = i ;

            while(s[j] != '#')
                 j++;

            int len = stoi(s.substr(i, j - i));
            res.push_back(s.substr(j+1 , len));

            i = j + len + 1;
        }

        return res;
    }
};
