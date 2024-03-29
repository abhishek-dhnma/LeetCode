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
    
    
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        vector<vector<int>> ans;
        vector<int> hpr;
        
        if(!root) return ans;
        
        
        queue<TreeNode *> q;
        q.push(root);
        q.push(NULL);
        
        while(!q.empty()){
            TreeNode * front = q.front();
            q.pop();
            
            if(!front){ // front is NULL
                ans.push_back(hpr);
               hpr.clear();
                
                if(!q.empty()){
                    q.push(NULL);
                }
                
            }else{
                hpr.push_back(front->val);
                if(front->left){
                    q.push(front->left);
                }
                if(front->right){
                    q.push(front->right);
                }
            }
        }
        
        
        return ans;
        
    }
};