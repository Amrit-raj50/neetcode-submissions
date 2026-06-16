# Last updated: 16/06/2026, 14:13:36
class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        num=int(''.join(map(str, digits)))
        num=num+1
        digits = [int(d)for d in str(num)]
        return digits