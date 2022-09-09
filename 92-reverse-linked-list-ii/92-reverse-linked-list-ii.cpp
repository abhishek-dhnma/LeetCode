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
    
    ListNode * reverse(ListNode * l, ListNode *  r){
        
        r->next = NULL;
        
        ListNode * cur = l;
        ListNode * pre = NULL;
        while(cur){
            
            ListNode* temp = cur->next;
            cur->next = pre;
            pre = cur;
            cur = temp;
        }
        
        return pre;
    }
    
    
    
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        
        if(!head || !head->next) return head;
        if(left == right) return head;
        
        ListNode * rhead = NULL;
        ListNode * tail = head;
        ListNode * l = NULL;
        ListNode * r = NULL;
         ListNode * pleft = NULL;
        
        int i = 1;
        while(tail ){
            if(i == left){
                l = tail;
            }
            if(i == right){
                r = tail;
            }
            if(left-1 == i){
                pleft = tail;
            }
            i++;
            tail = tail->next;
        }
        
        ListNode * nright;
        if(r){
            nright = r->next;
        }
        
        if(pleft)  pleft->next = NULL;
        
        if(l < r){
        rhead = reverse(l,r);
        }
        
        while(rhead){
            cout << rhead->val;
            rhead = rhead->next;
        }
        

        
        
        l->next = nright;
        if(pleft) { pleft->next = r;}else{ head = r; }
        
       
        
        return head;
        
    }
};