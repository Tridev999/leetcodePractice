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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> cr;
        vector<int> ans;
        if(head==NULL){
            return cr;
        }
        ListNode* curr = head;
        ListNode* copy = head;
        curr=curr->next;
        int i=2;
        while(curr->next!=NULL){
            if(curr->val>copy->val && curr->next->val<curr->val){
                cr.push_back(i);
            }
            if(curr->val<copy->val && curr->next->val>curr->val){
                cr.push_back(i);
            }
            copy=curr;
            curr=curr->next;
            i++;
        }
        if(cr.size()==0 || cr.size()<2){
            return {-1,-1};
        }
        int min1=INT_MAX;
        for(int i=1;i<cr.size();i++){
            min1 = min(min1,cr[i]-cr[i-1]);
        }
        ans.push_back(min1);
        ans.push_back(abs(cr[0]-cr[cr.size()-1]));
        return ans;
    }
};