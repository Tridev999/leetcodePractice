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
    int maxDepth(TreeNode* root) {
        queue<TreeNode*> q;
        if(root==NULL){
            return 0;
        }
        q.push(root);
        int c=0;
        while(!q.empty()){ // by using level order traversal
            int size = q.size();
            c++;
            for(int i=0;i<size;i++){
                TreeNode* a = q.front();
                 q.pop();
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