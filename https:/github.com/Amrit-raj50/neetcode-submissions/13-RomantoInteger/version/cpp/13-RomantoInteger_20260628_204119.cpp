// Last updated: 28/06/2026, 20:41:19
1class Solution {
2public:
3    int romanToInt(string s) {
4        int sum = 0;
5        int value = 0;
6        int dup = 0;
7        for(int i = 0 ; i < s.size() ; ){
8            if(s[i] == 'I'){
9               if(s[i+1] == 'V'){
10                value = 4;
11                i+=2;
12               }
13               else if(s[i+1] == 'X'){
14                value = 9;
15                i+=2;
16               }
17               else{
18                value = 1;
19                i++;
20               }
21            }
22            else if(s[i] == 'V'){
23                value = 5;
24                i++;
25            }
26            else if(s[i] == 'X'){
27                if(s[i+1] == 'L'){
28                    value = 40;
29                    i+=2;
30                }
31                else if(s[i+1] == 'C'){
32                    value = 90;
33                    i+=2;
34                }
35                else{
36                    value = 10;
37                    i++;
38                }
39            }
40            else if(s[i] == 'L'){
41                value = 50;
42                i++;
43            }
44            else if(s[i] == 'C'){
45                if(s[i+1] == 'D'){
46                    value = 400;
47                    i+=2;
48                }
49                else if(s[i+1] == 'M'){
50                    value = 900;
51                    i+=2;
52                }
53                else{
54                     value = 100;
55                     i++;
56                }
57            }
58            else if(s[i] == 'D'){
59                value = 500;
60                i++;
61            }
62            else{
63                value = 1000;
64                i++;
65            }
66            sum = sum + value;
67        }
68
69        return sum;
70    }
71
72};