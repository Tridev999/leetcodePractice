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
    string str = "";
    void preorder(TreeNode* root){ // done using preorder traversal
        if(root==NULL){
            return;
        }
        string s = "";
        if(str.empty()){
             s+= to_string(root->val);
        }
        else{
             s+="->"+to_string(root->val);
        }
        str+=s;
        if(root->left==NULL and root->right==NULL){
            vec.push_back(str);
            if(!str.empty()){
                str=str.substr(0,str.length()-s.length());
            }
            return;
        }
        preorder(root->left);
        preorder(root->right);
        str=str.substr(0,str.length()-s.length());
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        preorder(root);
        return vec;
    }
};