/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    bool isUnivalTree(TreeNode* root) {
        if (root == NULL) {
            return false;
        }
        int val = root->val;

        if (root->left != NULL && root->left->val != val) {
            return false;
        }
        if (root->right != NULL && root->right->val != val) {
            return false;
        }
        if (root->left == NULL || root->right == NULL) {
            return true;
        }
        bool leftval = isUnivalTree(root->left);
        bool rightval = isUnivalTree(root->right);
        return leftval && rightval;
    }
};