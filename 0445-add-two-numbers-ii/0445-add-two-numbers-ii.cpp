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
void reverse(ListNode*& head){
    ListNode* prev = NULL;
    ListNode* fat = NULL;
    ListNode* curr = head;
    while(curr){
        fat = curr->next;
        curr->next = prev;
        prev = curr;
        curr = fat;

    }
    head = prev;
}
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    reverse(l1);
    reverse(l2);
    int sum = 0, carry = 0;
    ListNode* curr1 = l1;
    ListNode* curr2 = l2;
    ListNode* head1 = new ListNode(0);
    ListNode* curr = head1;
    while(curr1 && curr2){
        sum = curr1->val + curr2->val + carry;
        curr->next = new ListNode(sum%10);
        curr = curr->next;
        carry = sum/10;
curr1 = curr1->next;
curr2 = curr2->next;
    }
    while(curr1){
        sum = curr1->val + carry;
        curr->next = new ListNode(sum%10);
        curr = curr->next;
        carry = sum/10;
curr1 = curr1->next;
    }
    while(curr2){
        sum = curr2->val + carry;
        curr->next = new ListNode(sum%10);
        curr = curr->next;
        carry = sum/10;
        curr2 = curr2->next;
    }
    if(carry)
    {
        curr->next = new ListNode(carry);
        curr = curr->next;
    }
    ListNode* temp = head1;
    head1 = head1->next;
    delete temp;
    reverse(head1);
    return head1;
    }
};