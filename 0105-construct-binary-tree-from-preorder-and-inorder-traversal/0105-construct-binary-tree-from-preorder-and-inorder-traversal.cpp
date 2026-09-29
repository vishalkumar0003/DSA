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
int find(vector<int>& in, int target, int s, int e){
    for(int i = 0;i <= e;i++){
        if(in[i] == target)
        return i;
    }
    return -1;
}
TreeNode* Tree(vector<int>& pre, vector<int>& in, int instart,int  inend,int index){
    if(instart > inend)
    return NULL;
    TreeNode* root = new TreeNode(pre[index]);
    int pos = find(in, pre[index], instart, inend);
    root->left = Tree(pre, in, instart, pos-1, index+1);
    root->right = Tree(pre,in, pos+1, inend, index+(pos-instart)+1);
    return root;

}
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return Tree(preorder , inorder , 0, preorder.size()-1, 0);

    }
};