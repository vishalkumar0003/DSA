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
        ListNode* curr = head;
        if(head == NULL || head->next == NULL || k == 0)
        return head;
        int size = 1;
        while(curr->next){
            size++;
            curr = curr->next;
        }
        k = k%size;
        if(k == 0)
        return head;
        int count = size - k;
        ListNode* prev = NULL;
        ListNode* head1 = head;
        while(count--){
      prev = head1;
      head1 = head1->next;
        
        }
        prev->next = NULL;
        curr->next = head;
        return head1;
    }
};