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
        if (!head) return nullptr;

        int count = 0;
        ListNode* temp = head;
        while (temp) {
            count++;
            temp = temp->next;
        }

        if (n == count) {
            ListNode* toDelete = head;
            head = head->next;
            delete toDelete;
            return head;
        }

        temp = head;
        for (int i = 1; i < count - n; i++) {
            temp = temp->next;
        }

        if (temp && temp->next) {
            ListNode* toDelete = temp->next;
            temp->next = temp->next->next;
            delete toDelete;
        }

        return head;
    }
};