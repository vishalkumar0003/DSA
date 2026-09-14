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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0,sum;
        ListNode* curr1 = l1;
        ListNode* curr2 = l2;
        ListNode* head = new ListNode(0);
        ListNode* curr3 = head;
        while(curr1 != NULL && curr2 != NULL){
            sum = curr1->val + curr2->val + carry;
            curr3->next = new ListNode(sum%10);
            carry = sum/10;
            curr1 = curr1->next;
            curr2 = curr2->next;
            curr3= curr3->next;
        }
        while(curr1 != NULL){
            sum = curr1->val + carry;
            curr3->next = new ListNode(sum%10);
            carry = sum/10;
            curr1 = curr1->next;
curr3 = curr3->next;
        }
        while(curr2 != NULL){
            sum = curr2->val + carry;
            curr3->next = new ListNode(sum%10);
            carry = sum/10;
            curr2 = curr2->next;
curr3 = curr3->next;
        }
        if(carry){
            curr3->next = new ListNode(carry);
        }
        ListNode* temp = head;
head = head->next;
delete temp;
return head;
    }
};