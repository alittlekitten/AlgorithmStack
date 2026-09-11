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
        vector<vector<int>> v;
        if (root == NULL) return v;

        queue<pair<int,TreeNode*>> q;
        q.push(make_pair(1, root));

        while (!q.empty() ) {
            pair<int, TreeNode*> p = q.front();
            q.pop();

            vector<int> tmp;
            if (v.size() < p.first) v.push_back(tmp);
            v[p.first - 1].push_back(p.second->val);
             
            if (p.second->left != NULL) q.push(make_pair(p.first + 1, p.second->left));
            if (p.second->right != NULL) q.push(make_pair(p.first + 1, p.second->right));

        }

        return v;
    }
};
