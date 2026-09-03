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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* curr = head;
        ListNode* temp = head;
        ListNode* temp1 = head;
        int cnt=0;
        while(curr!=NULL){
            curr=curr->next;
            cnt++;
        }
        cout << cnt;
        int n = cnt-k;
        cnt=0;
        int a = 0;
        int b = 0;
        while(temp!=NULL){
            if(cnt==(k-1)){
                a=temp->val;
            }
            if(cnt==n){
                b=temp->val;
            }
            temp=temp->next;
            cnt++;
        }
        cnt=0;
        while(temp1!=NULL){
            if(cnt==(k-1)){
                temp1->val = b;
            }
            if(cnt==n){
                temp1->val = a;
            }
            temp1=temp1->next;
            cnt++;
        }
        return head;
    }
};