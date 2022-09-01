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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        // BRUTE FORCE
        
        int l = 0;
        ListNode * temp = head;
        while(temp){
            l++;
            temp = temp->next;
        }
        
        int diff = l-n;
        if( diff == 0){
            head = head->next;
           //out << "1st" << endl;
            return head;
        }
        
        ListNode * pre ;
        ListNode * cur = head;
        
        while(diff-- > 0){
            
            pre = cur;
            cur = cur->next;
        }
        
        
        pre->next = cur->next;
        delete cur;
        return head;
        
    }
};