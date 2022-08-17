class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        
        vector<string> morse_code = {".-","-...","-.-.","-..",".","..-.","--.",
    "....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.",
    "...","-","..-","...-",".--","-..-","-.--","--.."};
    set<string> s;
        
        int ans = 0;
        string st;
        for(auto word : words){
            
            for(auto ch : word){
            
              st +=    morse_code[(ch - 'a')] ;
                
            }
            s.insert(st);
            st.clear();
        }


        return s.size();
        
    }
};