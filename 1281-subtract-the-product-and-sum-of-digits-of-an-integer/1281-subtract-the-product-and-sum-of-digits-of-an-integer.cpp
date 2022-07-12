class Solution {
public:
    int subtractProductAndSum(int n) {
        
        
        int sum=0;
        int pro=1;
        for(int i=0;n>0;i++)
        {
            sum+=n%10;
            pro*=n%10;
            n=n/10;
        }
        return pro-sum;
        
    }
};