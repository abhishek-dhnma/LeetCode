class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        
        int size = encoded.size();
        vector<int> ans(size+1);
        ans[0] = first;
        
        
        for(int i=0; i<size; i++){
            ans[i+1] = encoded[i] ^ ans[i];
        }
        
        return ans;
        
    }
};