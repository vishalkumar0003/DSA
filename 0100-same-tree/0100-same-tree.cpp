/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
void check(TreeNode*& p, TreeNode*& q, int& count){
    if(p == NULL && q == NULL)
    return;
    if( p == NULL && q != NULL){
count = 1;
return;
    }
    
    if(q == NULL && p != NULL){
        count = 1;
return;
    }
    
    if(q->val != p->val)
    count = 1;
    check(p->left, q->left,count);
    check(p->right, q->right,count);

}
    bool isSameTree(TreeNode* p, TreeNode* q) {
        int count = 0;
        check(p,q,count);
        if(count == 0)
        return true;
        return false;
    }
};