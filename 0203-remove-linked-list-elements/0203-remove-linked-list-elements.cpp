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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* curr = head;
        ListNode* prev = NULL;
        while(curr){
            if(curr->val == val && prev != NULL){
                
                prev->next = curr->next;
                curr->next = NULL;
                delete curr;
                curr = prev->next;
            }
            else if( curr->val == val && prev == NULL){
                ListNode* temp = head;
                head = head->next;
                delete temp;
                curr = head;
            }else{
                prev = curr;
                curr = curr->next;
            }

        }
        return head;
    }
};