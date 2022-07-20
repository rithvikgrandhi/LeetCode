class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
      
        
        vector<int> res;
        for(int i=0;i<size(nums);i++)
            res.push_back(nums[i]*nums[i]);
        
        sort(res.begin(),res.end());
        return res;
        
    }
};