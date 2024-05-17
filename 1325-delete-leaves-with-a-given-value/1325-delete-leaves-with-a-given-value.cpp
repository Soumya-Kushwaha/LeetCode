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
    TreeNode* removeLeafNodes(TreeNode* r, int target) {
        if (r == NULL) 
            return NULL;
        r->left = removeLeafNodes(r->left, target);
        r->right = removeLeafNodes(r->right, target);
        return (r->left == r->right && r->val == target) ? NULL : r;
    }
};