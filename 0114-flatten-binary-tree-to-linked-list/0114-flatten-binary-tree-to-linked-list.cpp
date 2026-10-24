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
void makevector(TreeNode* root, vector<TreeNode*> &ans){
        if(root == NULL)
        return;
        ans.push_back(root);
        makevector(root->left, ans);
        makevector(root->right,ans);
    }
    void flatten(TreeNode* root) {
    
        vector<TreeNode*> ans;
        if(root == NULL)
        return;
        makevector(root,ans);
        TreeNode* head = ans[0];
        TreeNode* curr = head;
        for(int i =0 ;i < ans.size()-1;i++){
curr->left = NULL;
curr->right = ans[i+1];
curr = curr->right;
        }
        root = head;
    }
};