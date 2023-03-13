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
    bool isSymmetric(TreeNode* root) {
        if (root == NULL)
            return true;
        
        return symmetric(root->left, root->right);
    }
    
    bool symmetric(TreeNode* one, TreeNode* two){
        if (!one && !two)
            return true;
        
        if (!one || !two)
            return false;
        
        if (one->val != two->val)
            return false;
    
        return symmetric(one->left, two->right) && symmetric(one->right, two->left);
    }
};