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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> vec;
        queue<TreeNode*> q;
        if(root==nullptr){
            return vec;
        }
        if(root->left==nullptr && root->right==nullptr){
            vector<int> v1;
            v1.push_back(root->val);
            vec.push_back(v1);
            return vec;
        }
        q.push(root);
        int c=0;
        while(!q.empty()){
            vector<int> v1;
            int size=q.size();
            for(int i=0;i<size;i++){
                    TreeNode* a = q.front();
                    v1.push_back(a->val);
                    q.pop();
                    if(a->left!=NULL){
                        q.push(a->left);
                    }
                    if(a->right!=NULL){
                        q.push(a->right);
                    }
        }
            if(c%2==0){
                    vec.push_back(v1);
                }
            else{
                reverse(v1.begin(),v1.end()); //level order traversal with odd even logic
                vec.push_back(v1);
            }
            c++;
          
        }
        return vec;
    }
};