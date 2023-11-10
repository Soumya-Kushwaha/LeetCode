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
        if (root == NULL)
            return 0;
        
        stack<pair<TreeNode*, int>> st;
        st.push({root, 0});
        
        int sum = 0;
        int deepDepth = 0;
        
        while (!st.empty()){
            auto [node, depth] = st.top();
            st.pop();
            
            if (depth > deepDepth){
                deepDepth = depth;
                sum = 0;
            }
            
            if (depth == deepDepth)
                sum += node->val;
            
            if (node->right != NULL)
                st.push({node->right, depth+1});
            
            if (node->left != NULL)
                st.push({node->left, depth+1});            
        }
        return sum;
    }
};