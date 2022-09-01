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
        
        int l = 0;
        ListNode * temp = head;
        while(temp){
            l++;
            temp = temp->next;
        }
        
        int diff = l-n;
        if( diff == 0){
            head = head->next;
            return head;
        }
        
        ListNode * pre ;
        ListNode * cur = head;
        
        for(int i=diff; i>0; i--){
            
            pre = cur;
            cur = cur->next;
        }
        
        
        pre->next = cur->next;
        
        return head;
        
    }
};