class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
     
        vector<int> v1(nums);
        
        for(int i:nums){
            v1.push_back(i);
        }
        return v1;
    }
};