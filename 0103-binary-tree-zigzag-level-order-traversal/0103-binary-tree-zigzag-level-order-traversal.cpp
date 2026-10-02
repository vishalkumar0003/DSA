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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        stack<TreeNode*> left_right;
        stack<TreeNode*> right_left;
        vector<vector<int>> ans;

        if(root == NULL)
        return ans;
        left_right.push(root);
        while(!left_right.empty() || !right_left.empty()){
            vector<int> ans1;
            if(!left_right.empty()){
                while(!left_right.empty()){
                    TreeNode* temp = left_right.top();
                    left_right.pop();
                    ans1.push_back(temp->val);
                    if(temp->left)
                    right_left.push(temp->left);
                    if(temp->right)
                    right_left.push(temp->right);
                }
                ans.push_back(ans1);
            }
            else{
                while(!right_left.empty()){
                    TreeNode* temp = right_left.top();
                    right_left.pop();
                    ans1.push_back(temp->val);
                    if(temp->right)
                    left_right.push(temp->right);
                    if(temp->left)
                    left_right.push(temp->left);
                }
                ans.push_back(ans1);
            }
        }
        return ans;
    }
};