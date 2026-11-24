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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL){
            return head;
        }
        ListNode* dummy = new ListNode(0);
        ListNode* curr = dummy;
        curr->next=head;
        head=curr;
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast!=NULL && n!=0){
            fast=fast->next;
            n--;
        }
        while(fast->next!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
        slow->next = slow->next->next;
        return dummy->next;
    }
};