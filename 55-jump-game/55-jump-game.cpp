class Solution {
public:
    bool canJump(vector<int>& nums) {
    
       int i, mov = 0;
        for(i = nums.size()-2; i >= 0; i--){
            mov++;
            if(nums[i] >= mov)
			    mov = 0;
        }
        if(mov == 0) 
		    return true;
        else 
		    return false;
    }
};