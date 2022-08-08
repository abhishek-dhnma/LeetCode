class Solution {
public:
    int balancedStringSplit(string s) {
        
        int ans = 0;
        
        for(int i=0; i<s.size(); i++){
        string str = s.substr(0,i);
            
            char ch1 = 'L';
            char ch2 = 'R';
            
           int Ll =  count(str.begin(), str.end(),ch1);
            int Rr = count(str.begin(), str.end(),ch2);
            
            if(Ll == Rr){
                ans++;
            }
            }
        
        return ans;
        
    }
};