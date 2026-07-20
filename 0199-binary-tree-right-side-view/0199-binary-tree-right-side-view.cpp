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
    vector<int> rightSideView(TreeNode* root) {
         queue<TreeNode*> q;
        vector<int> vec;
        if(root==NULL){
            return vec;
        }
        q.push(root);
        while(!q.empty()){
            int size = q.size();
            for(int i=0;i<size;i++){
                TreeNode* a = q.front();
                q.pop();
                if(i==size-1){
                    vec.push_back(a->val); // done using level order traversal and size()-1
                }
                if(a->left!=NULL){
                    q.push(a->left);
                }
                if(a->right!=NULL){
                    q.push(a->right);
                }
            }
        }
        return vec;
        
    }
};