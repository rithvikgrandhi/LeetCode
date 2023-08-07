class Solution:
    def reverseVowels(self, s: str) -> str:
        
        vowels=['a','e','i','o','u','A','E','I','O','U']
        lis1=[]
        newword=""
        for i in s:
            
            if i in vowels:
                lis1.append(i)
        
        for i in range(len(s)):
            if s[i] in vowels:
                newword+=lis1[-1]

                lis1=lis1[:-1]
            else:    
                newword+=s[i]
        return newword