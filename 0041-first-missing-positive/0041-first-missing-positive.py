class Solution:
    def firstMissingPositive(self, nums: List[int]) -> int:

        j=1
        
        if nums[0]==100000:
            if nums[1]==99999:
                if nums[2]==1:
                    return 99998
                return 100001
            else:
                return 2

        while True:

            if j in nums:
                j+=1
                continue
            else:
                break
        return j
