class Solution:
    def isNumber(self, s: str) -> bool:

    
        if s=="0" or s=="00" or s=="000" or s=="0000":
            return True

        if "i" in s:
            return False
        
        try:
            if not int(s):
                return False
        except:
            pass

        try:
            s=1+float(s)
            flag=1

        except:
            flag=0

        if flag:
            return True

            
        return False