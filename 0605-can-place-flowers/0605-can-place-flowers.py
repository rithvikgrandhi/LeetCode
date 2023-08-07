class Solution:
    def canPlaceFlowers(self, flowerbed: List[int], n: int) -> bool:
        
        s=0
        if n==0:
            return True
        if len(flowerbed)==1:
            if flowerbed[0]==0:
                return True
            else:
                return False

        if flowerbed[0]==0 and flowerbed[1]==0:
            flowerbed[0]=1
            s+=1
        for i in range(1,len(flowerbed)-2):
            if flowerbed[i-1]==0 and flowerbed[i+1]==0 and flowerbed[i]==0:
                flowerbed[i]=1
                s+=1
        if flowerbed[-1]==0 and flowerbed[-2]==0:
            s+=1
        if s>=n:
            return True
        return False