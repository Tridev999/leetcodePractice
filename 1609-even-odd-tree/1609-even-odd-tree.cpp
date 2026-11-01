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
    bool isEvenOddTree(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        bool prev = true;
        int level = 0;
        while(!q.empty()){
            vector<int> vec;
            int size = q.size();
            for(int i=0;i<size;i++){
                TreeNode* curr = q.front();
                q.pop();
                vec.push_back(curr->val);
                if(curr->left!=NULL){
                    q.push(curr->left);
                }
                if(curr->right!=NULL){
                    q.push(curr->right);
            }
            }
            for(int i=0;i<vec.size();i++){
                if(vec[i]%2==0 && level%2==0){
                    return false;
                }
                else if(vec[i]%2!=0 && level%2!=0){
                    return false;
                }
            }
            for(int i = 1; i < vec.size(); i++) {
                if(level % 2 == 0) {
                    if(vec[i] <= vec[i-1]) {
                        return false;
                    }
                }
                else {
                    if(vec[i] >= vec[i-1]) {
                        return false;
                    }
                }
            }
            level++;
        }
        return true;
    }
};