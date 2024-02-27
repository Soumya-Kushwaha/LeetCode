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
    
    int height(TreeNode* root, int &maxx){
        if (!root)
            return 0;
        
        int leftHeight = height(root->left, maxx);
        int rightHeight = height(root->right, maxx);
        
        int curr = leftHeight + rightHeight;
        maxx = max(maxx, curr);
        
        return 1 + max(leftHeight, rightHeight);
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
        if (!root)
            return 0;
        
        int maxx = 0;
        height(root, maxx);
        return maxx;
    }
};