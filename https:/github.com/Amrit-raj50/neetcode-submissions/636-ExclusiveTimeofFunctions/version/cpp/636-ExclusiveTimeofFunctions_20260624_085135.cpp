// Last updated: 24/06/2026, 08:51:35
1class Solution {
2public:
3    int evalRPN(vector<string>& tokens) {
4        stack<string> s;
5        string ss ="";
6        int op1,op2;
7        int sum = 0;
8        if(tokens.size() == 1){
9            sum = stoi(tokens[0]);
10            return sum;
11        }
12        for(int i = 0 ; i < tokens.size() ; i++){
13            if(tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/" ){
14                if(tokens[i] == "+"){
15                    op1 = stoi(s.top());
16                    s.pop();
17                    op2 = stoi(s.top());
18                    s.pop();
19
20                    sum = op2 + op1;
21                    ss = to_string(sum);
22                    s.push(ss);
23                }else if(tokens[i] == "-"){
24                    op1 = stoi(s.top());
25                    s.pop();
26                    op2 = stoi(s.top());
27                    s.pop();
28
29                    sum = op2 - op1;
30                    ss = to_string(sum);
31                    s.push(ss);
32                }else if(tokens[i] == "*"){
33                    op1 = stoi(s.top());
34                    s.pop();
35                    op2 = stoi(s.top());
36                    s.pop();
37
38                    sum = op2 * op1;
39                    ss = to_string(sum);
40                    s.push(ss);
41                }else{
42                    op1 = stoi(s.top());
43                    s.pop();
44                    op2 = stoi(s.top());
45                    s.pop();
46
47                    sum = op2 / op1;
48
49                    ss = to_string(sum);
50                    s.push(ss);
51                }
52            }else{
53                s.push(tokens[i]);
54            }
55            
56        }
57        return sum;
58        
59    }
60};