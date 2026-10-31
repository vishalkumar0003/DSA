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
    ListNode* deleteDuplicates(ListNode* head) {
        map<int,int> mp;
        ListNode* curr = head;
        while(curr){
            mp[curr->val]++;
            curr = curr->next;
        }
        curr = head;
        ListNode* dummy = new ListNode(0);
        ListNode* curr1 = dummy;
        while(curr){
           
        if(mp[curr->val] == 1){
                curr1->next = curr;
                 curr = curr->next;
            curr1 = curr1->next;
            curr1->next = NULL;
            }
            else{
                curr = curr->next;
            }
           
        }
        return dummy->next;
    }
};