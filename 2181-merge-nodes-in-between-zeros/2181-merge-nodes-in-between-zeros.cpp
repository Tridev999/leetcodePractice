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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* head1 = NULL;
        ListNode* move = NULL;
        ListNode* curr = head->next;
        int c=0;
        long long s=0;
        while(curr!=NULL){
            if(curr->val!=0){
                s=s+curr->val;
            }
            else{
                ListNode* temp = new ListNode(s);
                if(c==0){
                    head1=temp;
                    move=head1;
                    c++;
                }
                else{
                    move->next=temp;
                    move=temp;
                }
                s=0;
            }
            curr=curr->next;
        }
        return head1;
    }
};