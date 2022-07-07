class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        
        int  max_sum = 0;
        for(int i=0; i<accounts.size(); i++){
            int t_money=0;
            for(int j=0; j<accounts[i].size(); j++){
                t_money += accounts[i][j];
            }
            max_sum = max(max_sum, t_money);
        }
        
        return max_sum;
        
    }
};