// Last updated: 02/07/2026, 07:13:03
1class Solution {
2public:
3    int climbStairs(int n) {
4         int no1 = 1; 
5    int no2 = 2;
6    int no3;
7    if(n == 0)
8    no3 = 0;
9    else if(n == 1)
10    no3 = 1;
11    else if(n == 2)
12    no3 = 2;
13    else{
14        for(int i = 1; i < n-1;i++)
15        {
16            no3 = no1 + no2;
17            no1 = no2;
18            no2= no3;
19        }
20    }
21    
22    return no3;
23    }
24};
25
26