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

//    ITERATIVE SOLUTION - 2 STACK
class Solution{
public:
    vector<int> postorderTraversal(TreeNode* root){
        vector<int> nodes;
        if (root == NULL)
            return nodes;

        stack <TreeNode*> st1, st2;
        TreeNode* node = root;
        st1.push(node);

        while (!st1.empty()){
            node = st1.top();
            st1.pop();
            if (node->left != NULL)
                st1.push(node->left);
            if (node->right != NULL)
                st1.push(node->right);
            st2.push(node);
        }
         while (!st2.empty()){
            node = st2.top();
            st2.pop();
            nodes.push_back(node->val);
        }
        return nodes;             
    }
};


//    RECURSIVE SOLUTION
 
 /*
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> nodes;
        postorder(root, nodes);
        return nodes;        
    }
private:
    void postorder(TreeNode* root, vector<int>& nodes){
        if (!root)
            return;
        
        postorder(root->left, nodes);
        postorder(root->right, nodes);
        nodes.push_back(root->val);
    }
};
*/