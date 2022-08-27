class Solution {
public:
    int lengthOfLastWord(string s) {
        
        int n  = s.size();
        int c = 0;
        
        
        for(int i=n-1; i>=0; i--){
            
            if(s[i] == ' '){
                continue;
            }
            
            if(s[i] >= 'a' and s[i] <= 'z'  ){
                c++;
            }
            
            if(s[i] >= 'A' and s[i] <= 'Z'){
                c++;
            }
            
            if(i == 0){
                break;
            }
        
            if(s[i-1] == ' ' ){
                    break;
                }
        }
        
        return c;
        
    }
};