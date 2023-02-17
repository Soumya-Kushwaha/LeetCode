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

    vector<int> nodes;

    void inorderTraversal(TreeNode* root){
        if (root == NULL)
            return;
        inorderTraversal(root->left);
        nodes.push_back(root->val);
        inorderTraversal(root->right);
    }

    int minDiffInBST(TreeNode* root) {
        inorderTraversal(root);

        int minDiff = INT_MAX;

        for(int i = 1; i < nodes.size(); i++)
            minDiff = min(minDiff, nodes[i] - nodes[i-1]);

        return minDiff;
    }
};