class Solution:
    def findWords(self, words: List[str]) -> List[str]:
        
        
        l1="qwertyuiop"
        l2="asdfghjkl"
        l3="zxcvbnm"
        
        ans1=[]
        
        for i in words:
            
            if len(l1)==len(set(l1+i.lower())):
                ans1.append(i)
                
                
            elif len(l2)==len(set(l2+i.lower())):
                ans1.append(i)
                
                
            if len(l3)==len(set(l3+i.lower())):
                ans1.append(i)
                
        return ans1
