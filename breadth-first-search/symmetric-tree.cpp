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
    bool isSymmetric(TreeNode* root) {
        return Check(root->left,root->right);
    }
    bool Check(TreeNode* p,TreeNode* q){
        if(!p && !q) return true;
        if(!p || !q || p->val != q->val) return false;
        return Check(p->left,q->right) && Check(p->right,q->left);
    }
};