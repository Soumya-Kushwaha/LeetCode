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

//                                                        RECURSIVE SOLUTION

/*
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> nodes;
        preorder(root, nodes);
        return nodes;        
    }
private:
    void preorder(TreeNode* root, vector<int>& nodes){
        if (!root)
            return;
        
        nodes.push_back(root->val);
        preorder(root->left, nodes);
        preorder(root->right, nodes);
    }
};
*/

//                                                    ITERATIVE SOLUTION - Stack

class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> preorder;
        
        if (root == NULL)
            return preorder;
        
        stack<TreeNode*> st;
        st.push(root);
        
        while (!st.empty()){
            TreeNode *node = st.top();
            st.pop();
            if (node -> right != NULL)
                st.push(node->right);
            if (node -> left != NULL)
                st.push(node->left);
            preorder.push_back(node->val);
        }
        return preorder;
    }
};