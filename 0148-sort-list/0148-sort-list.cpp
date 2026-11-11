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
    ListNode* sortList(ListNode* head) {
        vector<int> arr1;
        if(head == NULL || head->next == NULL)
        return head;
        ListNode* curr = head;
        while(curr != NULL)
        {
            arr1.push_back(curr->val);
            curr = curr->next;

        }
        sort(arr1.begin(), arr1.end());
        curr = head;
        int i = 0;
        while(curr != NULL){
            curr->val = arr1[i];
            curr = curr->next;
            i++;
        }
        return head;
    }
};