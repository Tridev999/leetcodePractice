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
    void rpreorder(TreeNode* root,int level){ //reverse preorder techenique is used.
        if(root==nullptr){
            return;
        }
        if(vec.size()==level){
            vec.push_back(root->val);
        }
        rpreorder(root->right,level+1);
        rpreorder(root->left,level+1);
    }
    vector<int> rightSideView(TreeNode* root) {
        int level=0;
        rpreorder(root,level);
        return vec;
    }
};