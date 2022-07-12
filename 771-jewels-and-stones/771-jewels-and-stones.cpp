class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        
        int jlen=jewels.length();
        int slen=stones.length();
        int num=0;
        for(int i=0;i<jlen;i++){
            for(int j=0;j<slen;j++)
            {
                if(jewels[i]==stones[j])
                    num++;
            }
        }

        return num;
    }
};