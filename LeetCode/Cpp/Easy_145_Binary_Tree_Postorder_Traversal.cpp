class Solution {
public:
    void postorder(TreeNode* curr, vector<int>& v) {
        if (!curr) return;
        postorder(curr->left, v);
        postorder(curr->right, v);
        v.push_back(curr->val);
    }

    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> v;
        postorder(root, v);
        return v;
    }
};
