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
    
    // iterative Way of doing this - Function 
    /* ListNode* reverseFunction(ListNode* head){
        
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
    */
    
    // Recursive Way of doing this - reverse head->next nodes and then 
    // I will just add that reverse linked list which is given by my friend
    // into first node then i return new reverse linked list
    
    ListNode * reverseFunction(ListNode * head){
        
        if(!head){
            return head;
        }
        if(!head->next){
            return head;
        }
        
        
        ListNode * revHead = reverseFunction(head->next);
        ListNode * revtail = head->next;
        revtail->next = head;
        head->next = NULL;
        
        return revHead;
        
    }
    ListNode* reverseList(ListNode* head) {
        return reverseFunction(head);
    }
};