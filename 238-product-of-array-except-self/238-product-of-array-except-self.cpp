class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int n = nums.size();
        vector<int> finalPrductofboth(n);
        vector<int> prefixprod(n);
        prefixprod[0] = 1;              // [1,0,0,0,0]
        vector<int> suffixprod(n);
        suffixprod[n-1] = 1;            // [0,0,0,0,1]
        
        for(int i=1; i<n; i++){
            prefixprod[i] = nums[i-1] * prefixprod[i-1];
            suffixprod[n-i-1] = nums[n-i] * suffixprod[n-i];
        }
        
        for(int i=0; i<n; i++){
            finalPrductofboth[i] = prefixprod[i] * suffixprod[i]; 
        }
        
        return finalPrductofboth;
        
    }
};