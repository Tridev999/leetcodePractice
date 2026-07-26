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
    bool inrder(TreeNode* root,int tsum,int s){
        if(root==NULL){
            return false;
        }
        s=s+root->val;
        if(root->left==NULL && root->right==NULL){
            return tsum==s;
        }
        return inrder(root->left,tsum,s) ||  inrder(root->right,tsum,s); //this is the approach of neetcode
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==NULL){
            return false;
        }
        int s=0;
        return inrder(root,targetSum,s);
    }
};