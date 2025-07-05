// 先層序遍歷 再逆置
class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        queue<TreeNode*> q;
        int levelSize = 0;
        vector<vector<int>> vv;
        if (root) {
            q.push(root);
            levelSize = 1;
        }

        while (!q.empty()) {
            vector<int> v;
            // 層層遍歷
            for (int i = 0; i < levelSize; ++i) {
                TreeNode* front = q.front();
                q.pop();
                v.push_back(front->val);
                if (front->left) {
                    q.push(front->left);
                }
                if (front->right) {
                    q.push(front->right);
                }
            }
            levelSize = q.size();
            vv.push_back(v);
        }
        reverse(vv.begin(),vv.end());
        return vv;
    }
};