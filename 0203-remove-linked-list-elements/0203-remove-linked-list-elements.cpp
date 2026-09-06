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
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL){
            return head;
        }
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* curr = head;
        ListNode* cp  = dummy;
        while(curr!=NULL){
            if(val==curr->val){
                ListNode* temp = curr;
                curr=curr->next;
                cp->next=curr;
                delete temp;
            }
            else{
                cp=curr;
                curr=curr->next;
            }
        }
        return dummy->next;
    }
};