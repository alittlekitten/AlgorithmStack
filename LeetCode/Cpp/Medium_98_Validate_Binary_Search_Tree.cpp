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
    bool isValid(TreeNode* root, TreeNode* low, TreeNode* high) {
        if (!root) return true;
        if (low && root->val <= low->val) return false;
        if (high && root->val >= high->val)  return false;
        return isValid(root->right, root, high) && isValid(root->left, low, root);
    }
    
    bool isValidBST(TreeNode* root) {
        return isValid(root, nullptr, nullptr);
    }
};
