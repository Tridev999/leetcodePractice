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
    TreeNode* invertTree(TreeNode* root) {
        queue<TreeNode*> q;
        if(root==NULL){
            return root;
        }
        if(root->left==NULL && root->right==NULL){
            return root;
        }
        q.push(root);
        while(!q.empty()){ //using level order traversal
            int size=q.size();
            TreeNode* a = q.front();
            q.pop();
            TreeNode* temp = a->left;
            a->left = a->right;
            a->right = temp;
            if(a->left!=NULL){
                q.push(a->left);
            }
            if(a->right!=NULL){
                q.push(a->right);
            }

        }
        return root;
    }
};