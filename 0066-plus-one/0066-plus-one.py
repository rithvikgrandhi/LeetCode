class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        

        strnum=""
        for i in digits:
            strnum=strnum+str(i)
        
        strnum=int(strnum)+1
        
        
        digits.clear()
        while strnum:
            
            digits.append(strnum%10)
            strnum=strnum//10
            

        digits.reverse()
        return digits