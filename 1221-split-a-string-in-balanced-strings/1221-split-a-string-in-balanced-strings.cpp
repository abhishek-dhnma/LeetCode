class Solution {
public:
    int balancedStringSplit(string s) {
        
        int ans = 0;
        int c1=0,c2=0;
        
            
            for (int i=0; i<s.size(); i++){
                if(s[i] == 'L') c1++;
                else c2++;
                    
                if(c1==c2) ans++;
            }
        
        return ans;
        
    }
};