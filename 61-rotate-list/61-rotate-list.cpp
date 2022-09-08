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
        
        // Finding length of linked List
        int l = 1;
        while(tail and tail->next ){
            l++;
            tail = tail->next;
        }
        
        
        k = k % l;
         // k == 0 means no rotating needed
        // k == 1 means last one node comes first i.e jump = (l-k-1)
        // k == 2 means last 2 node comes first
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