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
    
    ListNode* deleteDupe(ListNode *& head){
        
        if(!head || !head->next) return head;
        
        ListNode * cur = head;
        ListNode * pre = NULL;
        
        
        while(cur){
            
            while(cur->next and cur->val == cur->next->val){
                cur->next = cur->next->next;
            }
            
            cur = cur->next;
                
        }
        
        return head;
    }
    
    ListNode* deleteDuplicates(ListNode* head) {
        
        
        return deleteDupe(head);
        
        
    }
};