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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* tmp = new ListNode();
        tmp->next = head;
        
        ListNode *slow = tmp;
        ListNode *fast = tmp;
        
        for (int i = 0; i <= n; ++i) fast = fast->next;
        
        while (fast) {
            slow = slow->next;
            fast = fast->next;
        }
        
        ListNode* tmp2 = slow->next;
        slow->next = slow->next->next;

        delete tmp2;
        return tmp->next;
    }
};
