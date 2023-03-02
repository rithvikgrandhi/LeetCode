class Solution:
    def leftRigthDifference(self, nums: List[int]) -> List[int]:
        
        
        sum1=0
        for i in nums:
            sum1+=i
        lassum=0
        arr2=[]
        for i in nums:
            arr2.append(abs(lassum-(sum1-i-lassum)))
            lassum+=i
        return arr2