class Solution {
public:
    bool isPalindrome(int x) {
        
        if(x < 0){
        return false;
        }
        
    long rev = 0;
    int num = x;
    while(x != 0){

        rev = rev *10 + x%10;
        x /= 10;
    }

    if ( num == rev){
        return true;
    }else{
        return false;
    }
        
    }
};