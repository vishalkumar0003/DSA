class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {

        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* prev1 = dummy;

        // Reach the node before left
        for(int i = 1; i < left; i++) {
            prev1 = prev1->next;
        }

        ListNode* curr1 = prev1->next;

        // Find the node at right
        ListNode* curr2 = curr1;
        for(int i = left; i < right; i++) {
            curr2 = curr2->next;
        }

        ListNode* prev2 = curr2->next;

        // Detach sublist
        curr2->next = NULL;

        // Reverse sublist
        ListNode* prev = NULL;
        ListNode* curr = curr1;

        while(curr) {
            ListNode* nextNode = curr->next;

            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }

        // Reconnect
        prev1->next = curr2;
        curr1->next = prev2;

        return dummy->next;
    }
};