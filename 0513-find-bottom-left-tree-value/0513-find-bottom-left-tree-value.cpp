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
    
    void helper(TreeNode* root, int& maxDepth, int& leftVal, int depth){
        if (!root)
            return;
        
        helper(root->left, maxDepth, leftVal, depth+1);
        helper(root->right, maxDepth, leftVal, depth+1);
        
        if (depth > maxDepth){
            maxDepth = depth;
            leftVal = root -> val;
        }
    }
    
    int findBottomLeftValue(TreeNode* root) {
        int maxDepth = 0;
        int leftVal = root->val;
        helper(root, maxDepth, leftVal, 0);
        return leftVal;
    }
};