class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        
        
        int X=0;
        
        for(auto i:operations){
            if(i=="X++"||i=="++X")
                X++;
            else if(i=="X--"||i=="--X")
                X--;
        }
        return X;
        
    }
};