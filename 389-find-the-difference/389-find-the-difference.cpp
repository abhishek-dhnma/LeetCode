class Solution {
public:
    char findTheDifference(string s, string t) {
        
        int ans1=0, ans2=0;
        
        for(int i=0; i<s.length(); i++){
            ans1 += s[i];
        }
        
        for(int i=0; i<t.length(); i++){
            ans2 += t[i];
        }
        
        return (ans2-ans1);
        
        
    }
};