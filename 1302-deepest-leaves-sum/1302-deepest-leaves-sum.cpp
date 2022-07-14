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
    int deepestLeavesSum(TreeNode* root) {
        
        queue<TreeNode*> q;
    q.push(root);
    int sum = 0;
    

    while( !q.empty()){

        int n = q.size(); // queue size
        sum = 0;
        while(n--){
            TreeNode* front = q.front();
        q.pop();

        if(front->left){
            q.push(front->left);
        }
        if(front->right){
            q.push(front->right);
        }
        if( !front->left && !front->right){
            sum += front->val;
        }
        }
    }

    return sum;

        
    }
};