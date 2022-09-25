/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    // CHECK NOTES
    // 2 ways : recursive way and level order traversal (right view before Null)
    //https://www.techiedelight.com/print-right-view-binary-tree/ (Explanation)
    
    int max_level_so_far = -1;
    
    void solve(TreeNode * root, vector<int>& ans, int curentlevl){
        
        if(!root){
            return;
        }
        
        
        if(max_level_so_far < curentlevl){
            ans.push_back(root->val);
            max_level_so_far = curentlevl;
        }
        solve(root->right, ans, curentlevl+1);
        solve(root->left, ans, curentlevl+1);

    }
    
    vector<int> rightSideView(TreeNode* root) {
        
        vector<int> ans;
        if(!root) return ans;
        solve(root, ans, 0);
        return ans;
        
    }
};