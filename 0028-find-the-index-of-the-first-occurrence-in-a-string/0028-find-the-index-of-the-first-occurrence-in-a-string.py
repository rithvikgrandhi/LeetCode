class Solution:
    def strStr(self, haystack: str, needle: str) -> int:

        
        arr1=[]
        
        for i in range(len(haystack)):
            
            if haystack[i]==needle[0]:
                
                arr1.append(i)
        
        val=0
        flag=0
        for i in arr1:
            
            if str(haystack[i:i+len(needle)])==needle:
                
                flag=1
                break
            else:
                val+=1
        
        if flag:
            return arr1[val]
        return -1        

                

                