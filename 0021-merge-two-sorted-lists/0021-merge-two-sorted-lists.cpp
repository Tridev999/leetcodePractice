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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL && list2==NULL){
            return list1;
        }
        if(list1!=NULL && list2==NULL){
            return list1;
        }
        if(list1==NULL && list2!=NULL){
            return list2;
        }
        ListNode* curr = list1;
        ListNode* curr1 = list2;
        ListNode* head = NULL;
        ListNode* st = NULL;
        int c=0;
        while(curr!=NULL && curr1!=NULL){
            if(curr->val>=curr1->val){
                if(c==0){
                    ListNode* temp = curr1;
                    st=temp;
                    head=temp;
                    c++;
                }
                else{
                    ListNode* temp = curr1;
                    st->next = temp;
                    st = temp;
                }
                curr1=curr1->next;
            }
            else{
                if(c==0){
                    ListNode* temp = curr;
                    st=temp;
                    head=temp;
                    c++;
                }
                else{
                    ListNode* temp = curr;
                    st->next = temp;
                    st=temp;
                }
                curr=curr->next;
            }
        }
        while(curr!=NULL){
            ListNode* temp = curr;
            st->next = temp;
            st=temp;
            curr=curr->next;
        }
        while(curr1!=NULL){
            ListNode* temp = curr1;
            st->next = temp;
            st=temp;
            curr1=curr1->next;
        }
        return head;
    }
};