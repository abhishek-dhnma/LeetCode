class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        
        vector<string> morse_code = {".-","-...","-.-.","-..",".","..-.","--.",
    "....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.",
    "...","-","..-","...-",".--","-..-","-.--","--.."};
    set<string> s;
        
        int ans = 0;
        string st;
        for(auto xx : words){
            
            for(auto ss : xx){
            
              st +=    morse_code[(ss - 'a')] ;
                
            }
            s.insert(st);
            st.clear();
        }


        return s.size();
        
    }
};