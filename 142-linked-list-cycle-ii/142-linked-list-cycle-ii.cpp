/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        
         if(!head || !head->next) return NULL;
        
        ListNode * fast = head;
        ListNode * slow = head;
        
        bool cycle = false;
        
        while(fast and fast->next){
            
            slow = slow->next;
            fast = fast->next->next;
            if(slow ==  fast){
                cycle = true;
                break;
            }
        }
        
        if(cycle){
        
        slow = head;
        
        while( slow != fast){
            slow = slow->next;
            fast = fast->next;
        }
            
            return slow;
        }else{
            
            return NULL;
        }
        
       // return head;
        
        
    }
};