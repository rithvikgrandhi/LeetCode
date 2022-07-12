class Solution {
public:
    string defangIPaddr(string address) {
        string s2;
        for(int i=0; i<address.size(); ++i){
            if(address[i]=='.'){
                s2.push_back('[');                
                s2.push_back('.');
                s2.push_back(']');
            }
            else
                s2.push_back(address[i]);
        }
        return s2;
    }
};