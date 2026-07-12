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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
         queue<TreeNode*> q;
       vector<vector<int>> v;
        if(root==NULL){
            return v;
        }
        q.push(root);
        while(!q.empty()){ // used level order traversal with queue datastructure
            int size = q.size();
            double sum = 0;
            vector<int> level;
            for(int i=0;i<size;i++){
                TreeNode* a = q.front();
                q.pop();
                if(a->left!=NULL){
                    q.push(a->left);
                }
                if(a->right!=NULL){
                    q.push(a->right);
                }
                level.push_back(a->val);
            }
            v.push_back(level);
        }
        reverse(v.begin(),v.end());
        return v;
    }
};