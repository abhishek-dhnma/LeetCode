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
    ListNode* removeElements(ListNode* head, int val) {
        
        if(!head) return head;
        
        if(!head->next and head->val == val) return NULL;
        
        ListNode * del;
        while(head and head->val == val){
            del = head;
            head = head->next;
            delete del;
        }
        
        
        ListNode* cur = head;
        
        while(cur){
            if(cur->next and cur->next->val == val){
                ListNode * temp = cur->next;
                cur->next = temp->next;
                delete temp;    
            }else{
                cur = cur->next;
            }
        }

        
        
        return head;
        
    }
};