class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:

        lis1=nums1+nums2

        lis1.sort()

        len1=len(lis1)
        print(lis1)

        if len1%2==0:
            return (lis1[int(len1/2)-1]+lis1[int(len1/2)])/2
        else:
            return lis1[floor(len1/2)]