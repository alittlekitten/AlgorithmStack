/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    TreeNode* sortedListToBST(ListNode* head) {
        if(!head) return nullptr;
        
        ListNode* tmp = new ListNode(-1);
        tmp->next = head;
        
        ListNode *start = tmp;
        ListNode *end = tmp;
        ListNode *save;
        
        while(end && end->next){
            save = start;
            start = start->next;
            end = end->next->next;
        }
        
        cout << save->val << ", " << start->val << endl;
        
        TreeNode* root = new TreeNode(start->val);
        save->next = nullptr;
        root->left = (start == head) ? nullptr : sortedListToBST(head);
        root->right = sortedListToBST(start->next);
        
        return root;
    }
};
