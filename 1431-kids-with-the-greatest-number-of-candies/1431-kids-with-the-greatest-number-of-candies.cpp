class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
     
        vector<bool> arr2;
        
        
int max=*max_element(candies.begin(), candies.end());        
        
        for(int i=0;i<candies.size();i++)
        {
                if(candies[i]+extraCandies>=max)
                    arr2.push_back(true);
                else 
                    arr2.push_back(false);
            }
        
        return arr2;
        
    }
};