class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        int size = numbers.size();
        int s = 0;
        int e = size-1;
        
        while(s < e){
            
            int sum = numbers[s] + numbers[e];
            if(sum == target){
                return {s+1, e+1};
            }else if(sum > target){
                e--;
            }else{
                s++;
            }
        }
        
        return {-1,-1};
        
    }
};