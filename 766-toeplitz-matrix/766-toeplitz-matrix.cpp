class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        
        // CHECK NOTES
        // https://leetcode.com/problems/toeplitz-matrix/discuss/113422/C%2B%2BJava-Clean-Code (both solution find here)
    // 1 Way : Skip first row and column. So, we have previous values for checking (Clever Technique)
    // 2. Way : Check elements diagonally. Upper half and then bottom half
        
        int n = matrix.size();
        int m = matrix[0].size();
        
        for(int i=1; i<n; i++){
            for(int j=1; j<m; j++){
                if(matrix[i][j] != matrix[i-1][j-1]){
                    return false;
                }
            }
        }
        
        return true;
        
    }
};