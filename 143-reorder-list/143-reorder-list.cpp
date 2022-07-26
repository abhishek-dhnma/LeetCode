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
    void reorderList(ListNode* head) {
        
        if(head->next == NULL) return;
        
        ListNode* hh = head;        
        stack<ListNode*> s;
        int n = 0;

        
        while(hh != NULL){
            s.push(hh);
            n++;
            hh = hh->next;
        }
        
       //out << n;
        ListNode* temp = head;
        
        for(int i=0; i<n/2 ;i++){
            ListNode* stacktop= s.top();
            s.pop();
            stacktop->next = temp->next;
            temp->next = stacktop;
            temp = temp->next->next;
            
        }
        

        temp->next = NULL;
        
    }
};