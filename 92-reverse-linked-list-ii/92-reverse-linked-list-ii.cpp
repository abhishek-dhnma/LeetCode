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

        void reverse(ListNode * l, ListNode * r) {
            
            // Removing connection from list
            r -> next = NULL;
            
            // Reverse Process start
            ListNode * cur = l;
            ListNode * pre = NULL;
            while (cur) {

                ListNode * temp = cur -> next;
                cur -> next = pre;
                pre = cur;
                cur = temp;
            }
        }

    ListNode * reverseBetween(ListNode * head, int left, int right) {

        if (!head || !head -> next) return head;

        ListNode * tail = head;
        ListNode * l = NULL;
        ListNode * r = NULL;
        ListNode * pleft = NULL;
        
        
        // Set l and r pointer to its correct position
        int i = 1;
        while (tail) {
            if (i == left) {
                l = tail;
            }
            if (i == right) {
                r = tail;
            }
            if (left - 1 == i) {
                pleft = tail;
            }
            i++;
            tail = tail -> next;
        }
        
        // nright = next to right 
        ListNode * nright = r -> next; 
    

        if (pleft) pleft -> next = NULL;

        reverse(l, r);
        
        // Connection formation - make linked list again
        l -> next = nright;
        if (pleft) {
            pleft -> next = r;
        } else {
            head = r;
        }
        
        // return formed Linked List
        return head;

    }
};