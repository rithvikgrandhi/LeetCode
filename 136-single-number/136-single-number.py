class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        
        set1={0}
        set1.update(nums)
        return (sum(set1)*2)-sum(nums)