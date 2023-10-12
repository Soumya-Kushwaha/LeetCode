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
    bool symm(TreeNode* a, TreeNode* b){
        if (a == NULL ||b == NULL)
            return (a == b);
        
        return (a->val == b->val && symm(a->left, b->right) && symm(a->right, b->left));
    }
    
    bool isSymmetric(TreeNode* root) {
        if (root == NULL)
            return true;
        
        return symm(root->left, root->right);
    }
};