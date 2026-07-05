class Solution {
public:
    void preorder(TreeNode* curr, vector<int>& v) {
        if (!curr) return;
        v.push_back(curr->val);
        preorder(curr->left, v);
        preorder(curr->right, v);
    }

    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> v;
        preorder(root, v);
        return v;
    }
};
