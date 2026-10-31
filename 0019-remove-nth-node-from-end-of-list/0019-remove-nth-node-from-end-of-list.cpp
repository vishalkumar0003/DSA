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
        ListNode* curr = head;
        
        int size = 0;
        while(curr){
            size++;
            curr = curr->next;
        }
     n = size - n;
        ListNode* prev = NULL;
        curr = head;
        if(n == 0){
            ListNode* temp = head;
            head = head->next;
            delete temp;
            return head;
        }
        while(n--){
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;
        delete curr;
        return head;
    }
};