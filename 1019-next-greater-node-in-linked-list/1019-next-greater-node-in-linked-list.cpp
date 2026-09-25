/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> vec;
        ListNode* curr = head;
        int c = 0;
        while(curr!=NULL){
            c++;
            vec.push_back(curr->val);
            curr=curr->next;
        }
        stack<int> st;
        st.push(vec[c-1]);
        vec[c-1]=0;
        for(int i=c-2;i>=0;i--){
            while(!st.empty() && st.top()<=vec[i]){
                    st.pop();
            }
            int cval = vec[i];
            if(st.empty()){
                vec[i] = 0;
            }
            else{ 
                vec[i] = st.top();
            }
            st.push(cval);
            }
        return vec;
        }
};