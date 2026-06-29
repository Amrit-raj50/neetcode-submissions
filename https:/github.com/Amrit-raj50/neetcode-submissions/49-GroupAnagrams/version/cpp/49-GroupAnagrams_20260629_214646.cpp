// Last updated: 29/06/2026, 21:46:46
1class Solution {
2public:
3    vector<vector<string>> groupAnagrams(vector<string>& strs) {
4        unordered_map<string,vector<string>> anagram;
5        for(string word : strs){
6            string temp = word;
7            sort(temp.begin(),temp.end());
8            anagram[temp].push_back(word);
9        }
10        vector<vector<string>>result;
11        for(auto& it : anagram){
12            result.push_back(it.second);
13        }
14        return result;
15    }
16    
17};