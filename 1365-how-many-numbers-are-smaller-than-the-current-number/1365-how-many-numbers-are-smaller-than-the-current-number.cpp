class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        
        int siz=nums.size();
        vector<int> res;
        
        for(int i=0;i<siz;i++){
            int count=0;
            for(int j=0;j<siz;j++){
                if(nums[j]<nums[i])
                    count++;
            }
            res.push_back(count);
        }
        return res;
    }
};


