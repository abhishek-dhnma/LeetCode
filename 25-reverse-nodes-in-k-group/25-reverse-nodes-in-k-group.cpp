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
    
    ListNode* ReverseKNodes(ListNode* head, int k){
        
        if(!head){
            return head;
        }
        
        
        ListNode * cur = head;
        ListNode * pre = NULL;
        ListNode * count = head;
        
        int i = 0;
        int j= 0;
        while(j < k && count){
            j++;
            count = count->next;
        }
        
        if( j >= k){
        while(cur && i < k){
            
            ListNode* temp = cur->next;
            cur->next = pre;
            pre = cur;
            cur = temp;
            i++;
        }
            
        ListNode * newHead = ReverseKNodes(cur, k);
        head->next = newHead;
        }else{
            
           return head;
        }
        
        return pre;
    }
    
    ListNode* reverseKGroup(ListNode* head, int k) {
        
        return ReverseKNodes(head, k);
    }
};