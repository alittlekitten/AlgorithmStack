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
    void reorderList(ListNode* head) {
        if (!head || !head->next) return;

        ListNode *p1 = head;
        ListNode *p2 = head;
        while (p2->next && p2->next->next) {
            p1 = p1->next;
            p2 = p2->next->next;
        }

        ListNode *pmid = p1;
        ListNode *pcur = p1->next;
        while (pcur->next) {
            ListNode* cur = pcur->next;
            pcur->next = cur->next;
            cur->next = pmid->next;
            pmid->next = cur;
        }

        p1 = head;
        p2 = pmid->next;
        while (p1 != pmid) {
            pmid->next = p2->next;
            p2->next = p1->next;
            p1->next = p2;
            p1 = p2->next;
            p2 = pmid->next;
        }
    }
};
