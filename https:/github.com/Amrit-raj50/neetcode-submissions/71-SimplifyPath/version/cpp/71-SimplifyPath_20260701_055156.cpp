// Last updated: 01/07/2026, 05:51:56
1class Solution {
2public:
3    string simplifyPath(string path) {
4        vector<string> st;
5        
6        stringstream ss(path);
7        
8        string store;
9        
10        
11        while(getline(ss,store,'/')){
12            if(store == "" || store == "."){
13                continue;
14            }
15            else if(store == ".."){
16                if(!st.empty()){
17                    st.pop_back();
18                }
19            }
20            else{
21                st.push_back(store);
22            }
23            
24            
25           
26        }
27        string res = "";
28        
29         for(const string& ch : st){
30                res += "/" + ch;
31            }
32        return res.empty()?"/" : res;
33    }
34};