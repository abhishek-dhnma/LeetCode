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
        
//     Using Two While loop 
//       while(cur){   
//           while(cur->next and cur->val == cur->next->val){
//                cur->next = cur->next->next;
//            }          
//            cur = cur->next;    
 //       }

//      Uding onw loop and if else condition
        while(cur){
            
            if(cur->next and cur->val == cur->next->val){
                ListNode * temp = cur->next;
                cur->next = cur->next->next;
                delete temp;
            }else{
                cur = cur->next;
            }
            
        }
        
        return head;
    }
    
    ListNode* deleteDuplicates(ListNode* head) {
        
        
        return deleteDupe(head);
        
        
    }
};