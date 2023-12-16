class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        dfs(root, res);
        return res;
    }

    void dfs(TreeNode* node, vector<int>& res) {
        if (node != nullptr) {
            dfs(node->left, res);
            res.push_back(node->val);
            dfs(node->right, res);
        }
    }
};
