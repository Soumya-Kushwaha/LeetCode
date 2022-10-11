/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    
    void dfs(TreeNode* orig, TreeNode* clone, TreeNode* target, TreeNode*& ans){
        
        if (!orig) 
            return;
        
        if (orig == target)
            ans = clone;
        
        dfs(orig->left, clone->left, target, ans);
        dfs(orig->right, clone->right, target, ans);
        
        return;
    }
    
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        
        TreeNode* ans = nullptr;
        dfs(original, cloned, target, ans);
        return ans;
    }
};