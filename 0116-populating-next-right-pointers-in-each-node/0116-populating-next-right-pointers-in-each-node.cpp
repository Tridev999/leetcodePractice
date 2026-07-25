/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        queue<Node*> q;
        if(root==NULL){
            return root;
        }
        q.push(root);
        while(!q.empty()){
            vector<Node*> vec;
            int size = q.size();
            for(int i=0;i<size;i++){
                Node* a = q.front();
                q.pop();
                vec.push_back(a);
                if(a->left!=NULL){
                    q.push(a->left);
                }
                if(a->right!=NULL){
                    q.push(a->right);
                }
            }
            for(int i=0;i<vec.size();i++){
                if(i==vec.size()-1){
                    vec[i]->next=nullptr;
                }
                else{
                    vec[i]->next=vec[i+1];
                }
            }

        }
        return root;
        
    }
};