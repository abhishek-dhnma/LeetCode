class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        
        int m = matrix.size();
        int n = matrix[0].size();
        
    int top = 0;
    int down = m-1;
    int left = 0;
    int right = n-1;
    int d = 0;
        
    while(top <= down && left <= right){
        
        // L -> R
        if(d == 0){
            for(int i=left; i<=right; i++){
                ans.push_back(matrix[top][i]);
            }
            top++;
            // T -> D
        }else if(d == 1){ 
            for(int i=top; i<=down; i++){
                ans.push_back(matrix[i][right]);
            }
            right--;
            // R -> L
        }else if(d == 2){
            for(int i=right; i>=left; i--){
                ans.push_back(matrix[down][i]);
            }
            down--;
            // D -> T
        }else if(d == 3){
            for(int i=down; i>=top; i--){
                ans.push_back(matrix[i][left]);
            }
            left++;
        }

        d = (d+1)%4;
    }
        return ans;
        
    }
};