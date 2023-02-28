class Solution:
    def addDigits(self, num: int) -> int:
        

        while num>9:
            sum1=0
            sum1+=num%10
            num=num//10
            num+=sum1
        return num
