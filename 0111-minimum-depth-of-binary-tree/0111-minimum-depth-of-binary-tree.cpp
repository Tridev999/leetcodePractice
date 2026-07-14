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
    int minDepth(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        if(root->left==NULL && root->right==NULL){
            return 1;
        }
        queue<TreeNode*> q;
        q.push(root);
        int c=0;
        bool f=true;
        while(!q.empty() && f){
            int size = q.size();
            c++;
            for(int i=0;i<size;i++){
                TreeNode* a = q.front();
                q.pop();
                if(a->left==NULL && a->right==NULL){ //by using level order traversal 
                    f=false;
                    break;
                }
                if(a->left!=NULL){
                   q.push(a->left);
                }
                if(a->right!=NULL){
                    q.push(a->right);
                }
            }
        }
        return c;
    }
};