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
    
    TreeNode * swapp(TreeNode* root){
        
        if(!root) return NULL;
        
        TreeNode* newroot = new TreeNode(root->val);
        newroot->left = swapp(root->left);
        newroot->right = swapp(root->right);
        
        swap(newroot->left, newroot->right);
        
        return newroot;
    }
    
    
    bool check(TreeNode* newroot, TreeNode* root){
        
        if(!root and !newroot) return true;
        if(!root || !newroot) return false;
        if(root->val != newroot->val) return false;
        
        return check(newroot->left,root->left) and check(newroot->right,root->right);
        
    }

    
    
    bool isSymmetric(TreeNode* root) {
        
        TreeNode* newroot = swapp(root);
        return check(newroot, root);
        
        

    }
};