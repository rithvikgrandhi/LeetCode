class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
       vector<int> res;
        int arr1[accounts.size()];
        int k=0;
            
            for(auto i: accounts){
                            int sum=0;

            for(int j=0;j<i.size();j++){
               
                sum+=i[j];
                
                
            }
                
                res.push_back(sum);
            }   
        
                return *max_element(res.begin(), res.end());

        
    }
};