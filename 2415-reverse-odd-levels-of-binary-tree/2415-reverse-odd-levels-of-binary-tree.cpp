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
    TreeNode* reverseOddLevels(TreeNode* root) {
        if(root==NULL){
            return root;
        }
        if(root->left==NULL && root->right==NULL){
            return root;
        }
        queue<TreeNode* > q;
        int c=0;
        q.push(root);
        while(!q.empty()){
            c++;
            int size = q.size();
            vector<TreeNode* > vec;
            for(int i=0;i<size;i++){
                TreeNode* a = q.front();
                q.pop();
                if(a->left!=NULL){
                    q.push(a->left);
                    if(c%2!=0){
                    vec.push_back(a->left);
                    }
                }
                if(a->right!=NULL){
                    q.push(a->right);
                    if(c%2!=0){
                    vec.push_back(a->right);
                    }
                }
            }
            for(int i=0,j=vec.size()-1;i<j;i++,j--){
                swap(vec[i]->val,vec[j]->val);
            }
        }
        return root;
    }
};