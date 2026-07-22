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
    void ishelp(TreeNode* root){
        if(root==NULL){
            return;
        }
        if(root->left!=NULL){
            TreeNode* st = root->left;
            if(st->left==NULL && st->right==NULL){ // by using preorder traversal
                sum+=st->val;
            }
        }
        ishelp(root->left);
        ishelp(root->right);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        ishelp(root);
        return sum;
    }
};