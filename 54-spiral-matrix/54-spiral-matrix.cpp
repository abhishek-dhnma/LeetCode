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
        int dir = 0;
        
        while(top <= down and left <= right){
            
            if(dir==0){
        
        for (int i = left ; i <= right ; i++)
        {
            ans.push_back(matrix[top][i]);
        }
        top++;
        }
        

        // Top => Down

        else if(dir==1){
        
            for (int i = top ; i <= down; i++)
            {
                ans.push_back(matrix[i][right]);
            }
            
            right--;
        }
        
        //Right => Left  [ NOW WE GOING REVERSE SO i >= left not ]
        else if(dir==2){
        
            for (int i = right; i >= left; i--)
            {
                ans.push_back(matrix[down][i]);
            }
            
            down--;
        }
        

        //Down => Top

        else if(dir==3){

            for (int i = down; i >= top; i-- )
            {
                ans.push_back(matrix[i][left]);
            }
            left++;
        }
            dir = (dir+1)%4;
        }
        
        return ans;
        
    }
};