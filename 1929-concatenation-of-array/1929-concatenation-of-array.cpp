class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        
        int size = nums.size();
        int n2 = 2*size;
        vector<int> ans(n2);
        
        for(int i = 0; i < n2; i++ ){
            if(i < n2/2){

            ans[i] = nums[i];

            }else{
                int ss = i - size;
                ans[i] = nums[ss];
                cout << ss << " ";
            }
        }
        return ans;
        
    }
};