class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        set<int> s;
        int n = nums.size();
        for(int i=0; i<=n; i++){
            s.insert(i);
        }
        
        for(auto i = 0; i < n; i++){
            
            if(s.find(nums[i]) != s.end()){
                s.erase(nums[i]);
                i--;
            }
        }
        
        auto ans = s.begin();
        return *ans;
    }
};