class Solution:
    def isStrictlyPalindromic(self, n: int) -> bool:



        for i in range(2,n-1):


            num1=0

            while n:

                num1=num1*10+n%i
                n=n//i
            if str(num1)!=reversed(str(num1)):
                return False
            continue
            
        return True
