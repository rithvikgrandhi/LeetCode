class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        

        strnum=""
        for i in digits:
            strnum=strnum+str(i)
        
        strnum=int(strnum)+1
        
        digits2=[]
        while strnum:
            
            digits2.append(strnum%10)
            strnum=strnum//10
            

        digits2.reverse()
        return digits2