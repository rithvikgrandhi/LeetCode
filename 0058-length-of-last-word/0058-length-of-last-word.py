class Solution:
    def lengthOfLastWord(self, s: str) -> int:

        s=s.strip().split(" ")


        return len(s[-1])
        # for i in range(len(s)-1,0)