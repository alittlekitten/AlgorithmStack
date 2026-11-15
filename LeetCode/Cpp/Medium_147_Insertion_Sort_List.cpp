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
    ListNode* insertionSortList(ListNode* head) {
        ListNode ln;
        ListNode* curr = head;

        while (curr) {
            ListNode* prev = &ln;

            while (prev->next && prev->next->val < curr->val) prev = prev->next;
            ListNode* tmp = curr->next;
            curr->next = prev->next;
            prev->next = curr;
            curr = tmp;
        }

        return ln.next;
    }
};
