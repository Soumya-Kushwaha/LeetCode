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
    void leftLeaves(TreeNode* root, int &summ){
        if (root == NULL)
            return;
        
        if (root -> left)
            if (!root->left->left && !root->left->right)
                summ += root->left->val;
        
        leftLeaves(root->left, summ);
        leftLeaves(root->right, summ);
    }
    
    int sumOfLeftLeaves(TreeNode* root) {
        int summ = 0;
        
        if (root == NULL)
            return summ;
        
        leftLeaves(root, summ);
        return summ;
    }
};