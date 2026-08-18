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
    set<int> vec;
    void inorder(TreeNode* root){
        if(root==NULL){
            return;
        }
        inorder(root->left);
        vec.insert(root->val);
        inorder(root->right);
    }
    int findSecondMinimumValue(TreeNode* root) {
        inorder(root);
        if(vec.size()>=2){
            int c=0;
            for(auto x:vec){
                c++;
                if(c==2){
                    return x;
                }
            }
        }
        return -1;
    }
};