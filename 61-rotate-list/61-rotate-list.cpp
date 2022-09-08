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
    ListNode* rotateRight(ListNode* head, int k) {
        
        if (!head || !head->next) return head;
        
        
       ListNode * tail = head;
        int l = 1;
        while(tail and tail->next ){
            l++;
            tail = tail->next;
        }
        
        
        k = k % l;
        if(k==0) return head;
        
        
        int jump = l-k-1;
        ListNode * temp = head;
        
        for(int i=0 ; i < jump; i++){
            temp = temp->next;
        }
        
        ListNode * newhead = temp->next;
        
        temp->next = NULL;
        
        tail->next = head;
        
        
        return newhead;
    }
};