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
    vector<int> vec;
    void ishelp(TreeNode* root,int level){
        if(root==NULL){
            return;
        }
        if(level==vec.size()){
            vec.push_back(root->val);
        }
        ishelp(root->right,level+1);
        ishelp(root->left,level+1);
    }
    vector<int> rightSideView(TreeNode* root) {
        int level=0;
        ishelp(root,level);
        return vec;
    }
};