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
    int cntPath(TreeNode* root, long long targetSum) {
        if (!root) return 0;
        int ans = 0;
        if (root->val == targetSum) ++ans;
        
        ans += cntPath(root->left, targetSum - root->val);
        ans += cntPath(root->right, targetSum - root->val);
        return ans;
    }
    int pathSum(TreeNode* root, int targetSum) {
        if (!root) return 0;
        return cntPath(root, targetSum) + pathSum(root->left, targetSum) + pathSum(root->right, targetSum);
    }
};
