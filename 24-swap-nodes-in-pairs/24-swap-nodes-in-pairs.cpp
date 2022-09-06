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
    ListNode* swapPairs(ListNode* head) {
        
        if(!head or !head->next) return head;
        
        
        ListNode * cur = head;
        ListNode * temp = head->next->next;
        ListNode * ans = head->next;
        
        while(true){
            
            ListNode * temp = cur->next->next;
            cur->next->next = cur;
            if(temp and temp->next){
                cur->next = temp->next;
            }else{
                cur->next = temp;
                break;
            }
            
            cur = temp;
            
        }
        
        return ans;
       
        
    }
};