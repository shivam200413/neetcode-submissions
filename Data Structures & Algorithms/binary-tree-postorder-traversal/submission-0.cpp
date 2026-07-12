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

    void post(TreeNode* node, vector<int> &sol){
        if(node == NULL) return;

        post(node->left, sol);
        post(node->right, sol);
        sol.push_back(node->val);
    }

    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> sol;
        post(root, sol);
        return sol;
    }
};