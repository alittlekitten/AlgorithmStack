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
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        int val[501] = { 0 };
        int size = 0;
        for (ListNode* tmp = head; tmp != nullptr; tmp = tmp->next) val[size++] = tmp->val;
        if (size <= 1) return head;
        k %= size;
        int idx = (size - k) % size;
        for (ListNode* tmp = head; tmp != nullptr; tmp = tmp->next) {
            tmp->val = val[idx];
            idx = (idx + 1) % size;
        }
        return head;
    }
};
