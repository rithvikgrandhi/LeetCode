class Solution {
public:
    int fib(int n) {
     
        
        vector<int> fib1(2);
        
        
        fib1[0]=0;
        fib1[1]=1;
        for(int i=2;i<=n;i++)
            fib1.push_back(fib1[i-1]+fib1[i-2]);
        
        return fib1[n];        
        
    }
    
};