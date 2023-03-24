class Solution
{
public:
    int tribonacci(int n)
    {
        vector<int> trib;
        trib.push_back(0);
        trib.push_back(1);
        trib.push_back(1);
        if(n==0)
        {
            return 0;
        }
        if(n==1 || n==2)
        {
            return 1;
        }
        
        for(int i=3;i<=n;i++){
            trib.push_back( trib[trib.size()-1]+ trib[trib.size()-2]+ trib[trib.size()-3]);
        }
        
        
        return trib[trib.size()-1];
    }
};