class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int> ans;
        
        int n = nums1.size();
        int m = nums2.size();
        

    unordered_set<int> SET(n);

    for(int i=0; i<n; i++){
        SET.insert(nums1[i]);
    }

    for(int i=0;i<m;i++){
        if(SET.find( nums2[i] ) != SET.end() ){
           // cout << nums2[i] << " ";
            ans.push_back( nums2[i] );
            SET.erase( nums2[i] );
        }
    }
        return ans;
    }
};