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
    int i=0;
    void preorder(TreeNode* root1){
        if(root1==NULL){
            return;
        }
        if(root1->left==NULL and root1->right==NULL){
            vec.push_back(root1->val);
        }
        preorder(root1->left);
        preorder(root1->right);
    }
    bool leaforder(TreeNode* root2){
        if(root2==NULL){
            return true;
        }
        if(root2->left==NULL and root2->right==NULL){
            if(i<vec.size() and vec[i]==root2->val){
                i++;
                return true;
            }
            else{
                return false;
            }
        }
        bool a = leaforder(root2->left);
        bool b = leaforder(root2->right);
        return a && b;

    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        preorder(root1);
        return leaforder(root2) && (vec.size()==i);
    }
};