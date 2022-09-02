/*
To form all the sequences of balanced bracket subsequences with n pairs. So there are n opening brackets and n closing brackets. 
So the subsequence will be of length 2*n. There is a simple idea, the i’th character can be ‘{‘ if and only if the count of ‘{‘ till i’th is less than n and i’th character can be ‘}’ if and only if the count of ‘{‘ is greater than the count of ‘}’ till index i. If these two cases are followed then the resulting subsequence will always be balanced. 
*/
class Solution {
public:
    
    void generateParenthesishelper(int n, int OpenCount, int CloseCount, string OutputString, vector<string>& ans){
        
        // BASE CASE
        if(OutputString.size() == 2*n){
            ans.push_back(OutputString);
            return;
        }
        
        
        // RECURSION CASE
        
        if(OpenCount > CloseCount){
            generateParenthesishelper(n, OpenCount, CloseCount+1, OutputString + ')', ans);
        }
        
        if(OpenCount < n){
            generateParenthesishelper(n, OpenCount+1, CloseCount, OutputString + '(', ans);
        }
        
    }
    
        vector<string> generateParenthesis(int n) {
        
        vector<string> ans;
        string OutputString = "";
        generateParenthesishelper(n,0,0,OutputString,ans);
        
            return ans;
        }
};