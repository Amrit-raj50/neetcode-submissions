// Last updated: 16/06/2026, 14:12:00
class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int count , c , max = 0;
        for(int i = 0 ; i < sentences.size() ; i++){
             count = 0,c= 0;
            for(int j = 0 ; j < sentences[i].size() ; j++){
                if(sentences[i][j] != ' '){
                    count = 1;
                }else{
                    if(count == 1){
                        count = 0;
                        c++;
                    }
                }
            }
            if(count == 1){
                c++;
            }
            max = max > c ? max : c;
        }
        return max;
    }
};