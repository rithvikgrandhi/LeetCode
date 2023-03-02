# The isBadVersion API is already defined for you.
# def isBadVersion(version: int) -> bool:

class Solution:
    def firstBadVersion(self, n: int) -> int:


        low=1
        hig=n

        while low<hig:

            mid=low+(hig-low)//2

            if isBadVersion(mid):
                hig=mid

            else:
                low=mid+1
        return low