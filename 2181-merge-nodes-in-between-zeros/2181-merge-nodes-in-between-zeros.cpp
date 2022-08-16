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
    
    
    ListNode* mergeNodes(ListNode* head) {
        
        int sum = 0;
        ListNode ans;
      ListNode *tail = &ans;
        
        while(head){
            if(head->val == 0){
                
             tail->next =  new ListNode(sum);
                tail = tail->next;
                
                head = head->next;
                sum = 0;
            }else{
                sum = sum + head->val;
                head = head->next;
            }

            
        }
        
            return ans.next->next;
        
        }
};