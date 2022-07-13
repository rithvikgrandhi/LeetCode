class Solution {
public:
    vector<string> letterCombinations(string digits) {
       
        
        
        vector<string> result;
        
        if(digits.size()==0)
            return result;
        
        string chars[10]={"placeholder0","placeholder1","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

        
        result.push_back("");
        for(int i=0; i<digits.size(); i++){
            vector<string> s1;
            string char1=chars[digits[i]-'0'];
            for(int c=0; c<char1.size(); c++){
                for(int j=0; j<result.size(); j++)
                    s1.push_back(result[j]+char1[c]);
            }
            result=s1;
        }
        return result;
    }
};
