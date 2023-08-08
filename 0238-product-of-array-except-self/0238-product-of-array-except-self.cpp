class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
             
        int len1=nums.size();
        vector<int> left_prods(len1,1);
        vector<int> right_prods(len1,1);
        
        for(int i=1;i<len1;i++){
                left_prods[i]=left_prods[i-1]*nums[i-1];}
        
        for(int i=len1-2;i>=0;i--){
                right_prods[i]=right_prods[i+1]*nums[i+1];
        }
        
        vector<int> result(len1);
        
        for(int k=0;k<len1;k++){
            result[k]=left_prods[k]*right_prods[k];
            }
        return result;
}};