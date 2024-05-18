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
    
    int traverse(TreeNode* r, int &moves) {
        
        if (r == NULL)
          return 0;
        
        int left = traverse(r->left, moves);
        int right = traverse(r->right, moves);
        moves += abs(left) + abs(right);
        return r->val + left + right - 1;
    }
    
    int distributeCoins(TreeNode* r, int moves = 0) {
        traverse(r, moves);
        return moves;
    }
};