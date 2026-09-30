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
    for(int i = s;i <= e;i++){
        if(in[i] == target)
        return i;
    }
    return -1;
}
TreeNode* Tree(vector<int>& in, vector<int>& post, int start, int end, int index){
    if(start>end)
    return NULL;
    TreeNode* root = new TreeNode(post[index]);
    int pos = find(in, post[index], start, end);
    root->left = Tree(in, post, start, pos-1, index - (end - pos)-1);
    root->right = Tree(in , post, pos+1, end, index-1);
    return root;
}
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        return Tree(inorder, postorder, 0 , inorder.size()-1, postorder.size()-1);
    }
};