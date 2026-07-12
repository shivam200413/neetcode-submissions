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

    void pre(TreeNode* node, vector<int> &sol){
        if(node == NULL) return;

        sol.push_back(node->val);
        pre(node->left, sol);
        pre(node->right, sol);
    }

    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> sol;
        pre(root, sol);
        return sol;
    }
};