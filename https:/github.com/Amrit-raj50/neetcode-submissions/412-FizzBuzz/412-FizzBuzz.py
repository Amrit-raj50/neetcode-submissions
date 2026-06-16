# Last updated: 16/06/2026, 14:12:50
class Solution:
    def fizzBuzz(self, n: int) -> List[str]:
        list = []
        for i in range(1,n+1):
            if i%3==0 and i%5==0:
                list.append("FizzBuzz")
            elif i%3==0:
                list.append("Fizz")
            elif i%5==0:
                list.append("Buzz")
            else:
                st=str(i)
                list.append(st)
            
        return list