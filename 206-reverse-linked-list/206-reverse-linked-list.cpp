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
    ListNode* reverseFunction(ListNode* head){
        
        if(!head || !head->next){
            return head;
        } 
        
        ListNode * cur = head;
        ListNode * pre = NULL;
        
        while(cur){
            ListNode * temp = cur->next;
            cur->next = pre;
            pre = cur;
            cur = temp;
        }
        
        return pre;
        
    }
    ListNode* reverseList(ListNode* head) {
        return reverseFunction(head);
    }
};