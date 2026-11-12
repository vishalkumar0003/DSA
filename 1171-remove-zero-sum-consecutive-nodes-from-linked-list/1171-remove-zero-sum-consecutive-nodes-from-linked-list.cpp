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
    ListNode* removeZeroSumSublists(ListNode* head) {
        ListNode* dummy = new ListNode(0);
        unordered_map<int, ListNode*> mp;
        dummy->next = head;
        int sum = 0;
        ListNode* curr = dummy;

        while(curr){
sum += curr->val;
mp[sum] = curr;
curr = curr->next;

        }
        curr = dummy;
        sum = 0;
        while(curr){
            sum += curr->val;
            curr->next = mp[sum]->next;
            curr = curr->next;
        }
        return dummy->next;
    }
};