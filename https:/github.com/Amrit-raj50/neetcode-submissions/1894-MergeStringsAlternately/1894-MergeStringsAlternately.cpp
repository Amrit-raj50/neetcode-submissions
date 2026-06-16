// Last updated: 16/06/2026, 14:12:18
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
       string word3 = "";
       int k = 0 ;
       int j = 0 ;
       for(int i = 0 ; i < (word1.size()+word2.size()); i++){
        if(k < word1.size()){
            word3 += word1[k];
            k++;
        }
        if(j < word2.size()){
            word3 += word2[j];
            j++;
        }
       }
       return word3;
    }
};