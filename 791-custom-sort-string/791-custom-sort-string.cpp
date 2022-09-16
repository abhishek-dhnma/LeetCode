class Solution {
public:
    string customSortString(string pattern, string str) {
        
        
        string ans;

    for(int i=0; i< pattern.size(); i++){
        int co = 0;
        for(int j = 0; j<str.size(); j++){
            if(pattern[i] == str[j]){
                co++;
                str[j] = '0';
            }
        }

        while(co-- > 0){
            ans += pattern[i];
        }

    }
    
    for(int i=0 ; i<str.size(); i++){
        
        if(str[i] != '0'){
            ans += str[i];
        }
    }

    return ans;
        
    }
};