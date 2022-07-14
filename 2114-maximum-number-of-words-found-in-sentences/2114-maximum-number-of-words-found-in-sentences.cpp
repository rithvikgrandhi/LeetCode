class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
     
    int max2 =0;
        
    for (auto const &i:sentences)
        {
            int x = count(i.begin() , i.end() ,' ');
        max2 = max(x+1 ,max2);
            }
            return max2;
            
    }
};