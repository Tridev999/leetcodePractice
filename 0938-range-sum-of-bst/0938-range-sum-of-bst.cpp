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
    int sum=0;
    void preorder(TreeNode* root,int l,int h){
        if(root==NULL){
            return;
        }
        if(root->val>=l && root->val<=h){ // solved using preorder traversal
            sum+=root->val;
        }
        preorder(root->left,l,h);
        preorder(root->right,l,h);
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        if(root==NULL){
            return sum;
        }
        preorder(root,low,high);
        return sum;
    }
};