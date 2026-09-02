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
    int getSum(TreeNode*root, int stat) {
        if (root == NULL) return 0;
        int ans = 0;
        ans += getSum(root->left, 0) + getSum(root->right, 1);
        if (root->left == NULL && root->right == NULL && stat == 0) ans += root->val;
        return ans;
    }
    int sumOfLeftLeaves(TreeNode* root) {
        return getSum(root, 1);
    }
};
