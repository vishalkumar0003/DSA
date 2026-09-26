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

        if (head == NULL || head->next == NULL)
            return;

        // Find middle
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast->next && fast->next->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // Separate the two halves
        ListNode* second = slow->next;
        slow->next = NULL;

        // Reverse second half
        ListNode* prev1 = NULL;
        ListNode* fat = NULL;

        while (second) {
            fat = second->next;
            second->next = prev1;
            prev1 = second;
            second = fat;
        }

        ListNode* head2 = prev1;

        // Merge
        ListNode* curr1 = head;
        ListNode* curr2 = head2;

        while (curr2) {

            ListNode* temp1 = curr1->next;
            ListNode* temp2 = curr2->next;

            curr1->next = curr2;
            curr2->next = temp1;

            curr1 = temp1;
            curr2 = temp2;
        }
    }
};