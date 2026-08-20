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
    TreeNode* bstFromPreorder(vector<int>& preorder) {
         TreeNode* head = new TreeNode(preorder[0]);
          stack<TreeNode*> st;
          st.push(head);
          for(int i=1;i<preorder.size();i++){
             if(preorder[i]<st.top()->val){
                TreeNode* temp = new TreeNode(preorder[i]); 
                st.top()->left = temp; //using monotonic stack strictly decreasing 
                st.push(temp);
             }
             else{
                TreeNode* last = NULL;
                while(!st.empty() && st.top()->val<preorder[i]){
                    last = st.top();
                    st.pop();
                }
                TreeNode* temp = new TreeNode(preorder[i]);
                last->right = temp;
                st.push(temp);
             }
          }
       return head;      
    }
};