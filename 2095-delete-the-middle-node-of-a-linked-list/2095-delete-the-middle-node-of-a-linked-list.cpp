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
    ListNode* deleteMiddle(ListNode* head) {
        
        if(!head) return NULL;
        
        ListNode * slow = head;
        ListNode * fast = head;
        ListNode * temp = head;
        
        int c = 0;
        
        while(fast and fast->next){
            slow = slow->next;
            c++;
            fast = fast->next->next;
        }
        
        if(c == 0){
            head = NULL;
            
            return head;
        }
        
        while(c-- > 1){
            temp = temp->next;
        }
        
        cout << slow->val << temp->val << " ";
        
        temp->next = slow->next;
        delete slow;
        
        
        return head;
    }
};