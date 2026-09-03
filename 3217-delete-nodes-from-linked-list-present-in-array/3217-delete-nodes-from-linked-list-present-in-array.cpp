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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        ListNode* curr = head;
        int n = nums.size();
        set<int> st;
        for(int x:nums){
            st.insert(x);
        }
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* prev = dummy;
        while(curr!=NULL){
            if(st.find(curr->val)!=st.end()){
                    prev->next=curr->next;
                    curr=curr->next;
                }
            else{
                prev=curr;
                curr=curr->next;
            }

        }
        return dummy->next;
    }
};