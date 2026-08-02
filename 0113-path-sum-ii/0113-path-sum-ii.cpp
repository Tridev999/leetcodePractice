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
    vector<vector<int>> vec;
    vector<int> v;
    int s = 0;
    void preorder(TreeNode* root,int target){
        if(root==NULL){
            return;
        }
        v.push_back(root->val);
        s=s+root->val;
        if(s==target and root->left==NULL and root->right==NULL){
            vec.push_back(v);
            // early return is not done for it                    
        }
        preorder(root->left,target);
        preorder(root->right,target);
        if(v.size()>1){
            v.pop_back();
        }
        s=s-root->val;
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        preorder(root,targetSum);
        return vec;
    }
};