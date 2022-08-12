class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        
        map<int, char> str;
        string ans;
        
        for(int i=0; i<s.size(); i++){
            str[indices[i]] = s[i];
        }
        
        
        for(int i=0; i<s.size(); i++){
           ans.push_back( str[i] );
        }
        
        
        return ans;
        
        
    }
};