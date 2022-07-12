class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        
        vector<int> arr2;
        
        for(int i=0;i<n;i++){
            arr2.push_back(nums[i]);
            arr2.push_back(nums[i+n]);
        }
        
        return arr2;
        
        
    }
};