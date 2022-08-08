class Solution {
public:
    int balancedStringSplit(string s) {
        
        int ans = 0;
        int c1=0,c2=0;
        
            
            for(int j=0; j < (s.substr(0,j)).size()+1; j++){
                if(s[j] == 'L'){
                    c1++;
                    
                }else{
                    c2++;
                }
            
            if(c1 == c2){
                ans++;
            }
            
        }
        
        return ans;
        
    }
};