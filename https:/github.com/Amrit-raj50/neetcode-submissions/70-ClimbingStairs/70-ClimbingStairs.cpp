// Last updated: 15/07/2026, 21:43:56
class Solution {
public:
    int climbStairs(int n) {
         int no1 = 1; 
    int no2 = 2;
    int no3;
    if(n == 0)
    no3 = 0;
    else if(n == 1)
    no3 = 1;
    else if(n == 2)
    no3 = 2;
    else{
        for(int i = 1; i < n-1;i++)
        {
            no3 = no1 + no2;
            no1 = no2;
            no2= no3;
        }
    }
    
    return no3;
    }
};

