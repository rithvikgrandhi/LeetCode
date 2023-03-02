class Solution:
    def firstUniqChar(self, s: str) -> int:
        
        set1={}
        cnt=-1
    
        for i in s:
            
            if i in set1:
                set1[i]+=1
            else:
                set1[i]=1

        for j in set1:
            if set1[j]==1:
                cnt=s.index(j)
                break
        
        return cnt