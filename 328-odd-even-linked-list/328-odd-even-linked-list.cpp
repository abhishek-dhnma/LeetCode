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
    
    ListNode * solve(ListNode* & head){

    if(!head) return head;
    if(!head->next) return head;

    ListNode * h1 = head;
    ListNode * h2 = head->next;
    ListNode * temp = head->next;

    while(h1 and h2 and h2->next){
        h1 = h1->next = h2->next;
        //h1 = h1->next;
        h2 = h2->next = h1->next;
        //h2 = h2->next;
    }

    h1->next = temp;
    return head;
}
    ListNode* oddEvenList(ListNode* head) {
        return solve(head);
    }
};