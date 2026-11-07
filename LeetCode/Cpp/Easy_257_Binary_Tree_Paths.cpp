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
    void append_path(TreeNode* curr, vector<string>& v, string s) {
    	s += to_string(curr->val);
    	if (curr->left) append_path(curr->left, v, s + "->");
    	if (curr->right) append_path(curr->right, v, s + "->");
    	if (!curr->left && !curr->right) v.push_back(s);
    }

    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> v;
        append_path(root, v, "");
        return v;
    }

};
