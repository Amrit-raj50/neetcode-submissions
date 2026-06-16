# Last updated: 16/06/2026, 14:13:46
class Solution:
    def isPalindrome(self, x):
        if x < 0:
            return False

        original = x
        reverse = 0

        while x>0:
            digit = x % 10
            reverse = reverse * 10 + digit
            x = x // 10 

        return original == reverse