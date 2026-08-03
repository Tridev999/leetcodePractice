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
    vector<string> vec;
    string str="";
    void preorder(TreeNode* root){ //can be solved using DFS + backtrack
        if(root==NULL){
            return;
        }
        str+=to_string(root->val);
        if(root->left==NULL and root->right==NULL){
            vec.push_back(str);
            str.pop_back();
            return; // early return is important
        }
        preorder(root->left);
        preorder(root->right);
        str.pop_back(); // backtrack
    }
    int sumNumbers(TreeNode* root) {
        preorder(root);
        int sum=0;
        for(auto s:vec){
            sum+=stoi(s);
        }
        return sum;
    }
};