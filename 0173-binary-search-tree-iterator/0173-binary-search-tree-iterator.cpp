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
class BSTIterator {
public:
    TreeNode* obj = NULL;
    stack<int> st;
    BSTIterator(TreeNode* root) {
        this->obj = root;
        inorder(obj);
    }
    void inorder(TreeNode* obj){
        if(obj==NULL){
            return;
        }
        inorder(obj->right);
        st.push(obj->val);
        inorder(obj->left);
    }
    
    int next() {
        if(!st.empty()){
            int a = st.top();
            st.pop();
            return a;
        }
        return -1;
    }
    
    bool hasNext() {
        if(!st.empty()){
            return true;
        }
        return false;
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */