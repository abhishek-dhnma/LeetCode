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
    
    // https://www.youtube.com/watch?v=73PQ9raLEVs&ab_channel=Vivekanand-AlgorithmEveryDay (Explanation)
    
    // LEETCODE 100 SOLUTION CODE (USED HERE)
    bool sameTree(TreeNode* root, TreeNode* subRoot){
        
        if(!root and !subRoot) return true;
        if(!root || !subRoot) return false;
        if(root->val != subRoot->val) return false;
        
        return sameTree(root->left,subRoot->left) and sameTree(root->right,subRoot->right);
    }
    
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        
        if(!root and !subRoot){
            return true;
        }
        
        if(!root || !subRoot){
            return false;
        }
        
        if( sameTree(root, subRoot) ) return true;
        
       return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
        
    }
};