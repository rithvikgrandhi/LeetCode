class Solution:
    def kidsWithCandies(self, candies: List[int], extraCandies: int) -> List[bool]:
        
        max1=max(candies)
        lis1=[]
        
        for i in candies:
            
            if i+extraCandies>=max1:
                lis1.append(True)
            else:
                lis1.append(False)
        return lis1