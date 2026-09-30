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
    vector<vector<int>> levelOrder(TreeNode* root) {
         vector<vector<int>> ans1;
         if(root == NULL)
         return ans1;
        queue<TreeNode* > q;
        q.push(root);

        while(!q.empty()){
            vector<int> ans;
            int n = q.size();
            while(n--){
                TreeNode* temp = q.front();
                ans.push_back(temp->val);
                q.pop();
                
                if(temp->left)
                q.push(temp->left);
                if(temp->right)
                q.push(temp->right);
            }
            ans1.push_back(ans);
        }
        return ans1;
    }
};