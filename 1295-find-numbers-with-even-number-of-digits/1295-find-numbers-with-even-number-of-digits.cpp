class Solution {
public:
    int findNumbers(vector<int>& nums) {
        
        int ans = 0;

    for(int i=0 ; i<nums.size(); i++){
       int n = nums[i];
       int c = 0;

       while(n!=0){
           c++;
           n /= 10;
            
       }
       if(c%2==0){
           ans++;
       }
    }

    return ans;
        
    }
};