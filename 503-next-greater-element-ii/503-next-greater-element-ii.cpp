class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& arr) {
        
    // CHECK NOTES AND PREVIOUS SOLUTION FOR MORE UNDERSTANDING
        
    int n = arr.size();
    vector<int> ans;
    stack<int> s;
    
    // Already add all the element in the stack in reverse order (n-1 to 0)
    for(int i=n-1; i>=0; i--){
        s.push(arr[i]);
    }
        
    // Again Traverse the array and this time we have stack which help in finding the next greater element
        
    // TC - O(N) and SC - O(N)

    for(int i=n-1; i>=0; i--){

        while(!s.empty() && arr[i] >= s.top()){
            s.pop();
        }

        if(s.empty()){
            ans.push_back(-1);
        }else{
            ans.push_back(s.top());
        }

        s.push(arr[i]);
    }
        reverse(ans.begin(), ans.end());

    return ans;
        
    }
};