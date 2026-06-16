# Last updated: 16/06/2026, 14:13:48
class Solution:
    def reverse(self, x: int) -> int:
        dup=abs(x)
        rev_x=0
        while dup>0:
            dig=dup%10
            rev_x=rev_x*10+dig
            dup=dup//10
        
        if x<0:
            rev_x=rev_x* -1
            
        if rev_x < -2**31 or rev_x > 2**31 - 1 :
            return 0

        return rev_x