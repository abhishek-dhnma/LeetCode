class Solution {
public:
    
    void Solve(int n, string str, int O, int C, vector<string> &ans){
        
        if(O == n && C ==n){
            ans.push_back(str);
        }
        
        if( O < n){
            Solve(n, str + '(', O+1, C, ans);
        }
        
        if( C < O){
            Solve(n, str + ')', O, C+1, ans);
        }
    }
    
    vector<string> generateParenthesis(int n) {
        
        vector<string> ans;
        string str = "";
        
         Solve(n, str, 0, 0, ans);
        return ans;
        
    }
};