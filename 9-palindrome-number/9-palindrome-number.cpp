class Solution {
public:
    bool isPalindrome(int x) {
        
        string str;
       str = to_string(x);
        
        string rstr;
        
        for(int n= str.length() - 1; n >=0 ; n--){
            rstr.push_back(str[n]);
        }
        
        
        if(rstr == str){
            return true;
        }else{
            return false;
        }
        
        
        
    }
};