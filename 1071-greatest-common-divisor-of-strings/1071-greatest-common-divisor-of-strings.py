class Solution:
    def gcdOfStrings(self, str1: str, str2: str) -> str:
        
        len1=len(str1)
        
        len2=len(str2)
        
        gcd1=(math.gcd(len1,len2))
        len3=len(str(str1[:gcd1]))
        
        gcdstr=str1[:len3]
        
        if str1==(gcdstr*int(len1/len3 )) and str2==( gcdstr*int(len2/len3 )):
            return gcdstr
        return ""