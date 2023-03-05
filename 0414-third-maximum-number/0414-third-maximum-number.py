class Solution:
    def thirdMax(self, nums: List[int]) -> int:
        
        
        
        set1=list(set(nums))
        set1.sort()
        
        try:
            return set1[-3]
        except:
            return set1[-1]
        