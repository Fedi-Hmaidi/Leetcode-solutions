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
    vector<int> v;

    TreeNode* increasingBST(TreeNode* root) {
        if (root == nullptr) {
            return nullptr;
        }

        inorderTraversal(root);
        sort(v.begin(), v.end());

        TreeNode* newRoot = new TreeNode(v[0]);
        TreeNode* currentNode = newRoot;

        for (int i = 1; i < v.size(); ++i) {
            currentNode->right = new TreeNode(v[i]);
            currentNode = currentNode->right;
        }

        return newRoot;
    }

    void inorderTraversal(TreeNode* node) {
        if (node == nullptr) {
            return;
        }

        inorderTraversal(node->left);
        v.push_back(node->val);
        inorderTraversal(node->right);
    }
};