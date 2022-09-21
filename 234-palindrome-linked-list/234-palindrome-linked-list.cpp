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
    bool isPalindrome(ListNode* head) {
        
        if(!head || !head->next) return true;
        
        stack<int> stk;
        
        ListNode* slow = head;
        ListNode* fast = head->next;
        while(fast and fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        
        ListNode * head2 = slow->next;
        slow->next = NULL;
        
        while(head2){
            stk.push(head2->val);
            head2 = head2->next;
        }
        
        while(!stk.empty() and head){
            if(head->val != stk.top()){
                return false;
            }
            head = head->next;
            stk.pop();
        }
        
        return true;
    }
};