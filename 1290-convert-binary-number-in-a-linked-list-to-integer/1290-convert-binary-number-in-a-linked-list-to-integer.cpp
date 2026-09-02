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
    int getDecimalValue(ListNode* head) {
        if(head==NULL){
            return 0;
        }
        string str = "";
        ListNode* curr = head;
        while(curr!=NULL){
            str+=to_string(curr->val);
            curr=curr->next;
        }
        int decimalValue = std::stoi(str, nullptr, 2);
        return decimalValue;
    }
};