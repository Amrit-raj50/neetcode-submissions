// Last updated: 15/07/2026, 21:43:54
class Solution {
public:
    string simplifyPath(string path) {
        vector<string> st;
        
        stringstream ss(path);
        
        string store;
        
        
        while(getline(ss,store,'/')){
            if(store == "" || store == "."){
                continue;
            }
            else if(store == ".."){
                if(!st.empty()){
                    st.pop_back();
                }
            }
            else{
                st.push_back(store);
            }
            
            
           
        }
        string res = "";
        
         for(const string& ch : st){
                res += "/" + ch;
            }
        return res.empty()?"/" : res;
    }
};