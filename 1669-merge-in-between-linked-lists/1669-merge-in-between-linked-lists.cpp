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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* curr1 = list1;
        ListNode* curr2 = list2;
        ListNode* temp = NULL;
        ListNode* c1 = NULL;
        ListNode* c2 = NULL;
        int cnt = 0;
        while(curr2->next!=NULL){
            curr2=curr2->next;
        }
        while(curr1!=NULL){
            if(cnt==(a-1)){
                c1 = curr1;
            }
            if(cnt==b){
                temp = curr1;
            }
            if(cnt==(b+1)){
                c2 = curr1;
            }
            cnt++;
            curr1 = curr1->next;
        }
        temp->next = NULL;
        c1->next = NULL;
        c1->next = list2;
        curr2->next = c2;
        return list1;
    }
};