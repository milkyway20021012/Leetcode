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
    vector<vector<int>> levelOrder(TreeNode* root) {
        int levelSize = 0;
        vector<vector<int>> vv;
        queue<TreeNode*> q;
        if(root){
            q.push(root);
            levelSize =1;
        }

        while(!q.empty()){
            vector<int> v;
            // 一層一層出
            for(int i = 0;i<levelSize;++i){
                TreeNode* front = q.front();
                q.pop();
                v.push_back(front->val);
                if(front->left)
                    q.push(front->left);

                if(front->right)
                    q.push(front->right);
            }
            levelSize = q.size();
            vv.push_back(v);
        }
        return vv;
    }
};