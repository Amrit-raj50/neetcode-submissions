# Last updated: 16/06/2026, 14:13:41
class Solution:
    def divide(self, dividend: int, divisor: int) -> int:
        if dividend==-2**31 and divisor==-1 :
            return 2**31 -1 

        negative = (dividend<0) != (divisor<0)

        dividend=abs(dividend)
        divisor= abs(divisor)

        result=dividend//divisor

        if negative:
            result=-result
        return result