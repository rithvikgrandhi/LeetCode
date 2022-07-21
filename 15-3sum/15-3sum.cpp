class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
      
vector<vector<int>> ans;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        
        for(int i=0; i<n; ++i) {
            if(i>0) while(i<n && nums[i] == nums[i-1])
                ++i;
            int j = i+1, k = n-1;
            
            while(j<k) {
                if (nums[i] + nums[j] + nums[k] == 0)
                {
                    ans.push_back({nums[i], nums[j], nums[k]});
                    ++j, --k;
                    
                    while(j<n && nums[j] == nums[j-1])
                        ++j;
                    
                    while(k>=0 && nums[k] == nums[k+1])
                        --k;
                
                }
                else if(nums[i] + nums[j] + nums[k] > 0)
                    --k;
                else
                    ++j;
            }
        }
        return ans;    
    }
};