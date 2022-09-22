class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& arr) {
        int n = arr.size();
    vector<int> ans;
    stack<int> s;

    for(int i=n-1; i>=0; i--){
        s.push(arr[i]);
    }

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