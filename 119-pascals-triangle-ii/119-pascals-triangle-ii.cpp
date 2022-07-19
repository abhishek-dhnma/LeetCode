class Solution {
public:
    

    vector<int> getRow(int rowIndex) {
        
        vector<int> ans;
        int first = 1;
        
        for(int j=0; j<=rowIndex; j++ ){
            ans.push_back(first);
            first = (long long)first * (rowIndex - j) /(j+1); 
        }
        return ans;
        
    }
};