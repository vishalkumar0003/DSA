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
    bool isPalindrome(ListNode* head) {
        ListNode* temp = head;
        int count = 0;
        while(temp){
            temp = temp->next;
            count++;
        }
        if(count == 1)
        return true;
        count = count/2;
        ListNode* prev = NULL;
        ListNode* curr = head;
        while(count--){
            prev = curr;
            curr = curr->next;
        }
        prev->next = NULL;
        prev = NULL;
        ListNode* front;
        while(curr){
            front = curr->next;
            curr->next = prev;
            prev = curr;
            curr = front;
        }
        ListNode* head1 = head;
        ListNode* head2 = prev;
        while(head1){
            if(head1->val != head2->val){
                return false;
            }
            head1 = head1->next;
            head2 = head2->next;
        }
        return true;
    }
};