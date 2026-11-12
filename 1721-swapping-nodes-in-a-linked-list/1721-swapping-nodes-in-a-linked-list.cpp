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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* curr = head;
        int size = 0, k1;
        while(curr){
                size++;
                curr = curr->next;
        }
        k1 = size - k;
        curr = head;
        while(--k){
            curr = curr->next;
        }
        ListNode* curr1 = head;
        while(k1--){
curr1 = curr1->next;
        }
        swap(curr->val, curr1->val);
        return head;
    }
};