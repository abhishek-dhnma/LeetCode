public:
ListNode* removeNthFromEnd(ListNode* head, int n) {
​
ListNode * fast = head;
ListNode * slow = head;
while(n-- > 0){
fast = fast->next;
}
if(fast == NULL) return head->next; // Edge Case handled when n = length of LL i.e. now n is first element of the LL. Example [1,2,3], n = 3. Here n is the length of the LL(Element which we want to remove is become the first element of the LL ) So fast become NULL as fast=fast->next n times so it become NULL at the end of the iteration and we can return head->next
while( fast->next != NULL){
fast = fast->next;
slow = slow->next;
}
slow->next = slow->next->next;
return head;
}
};
```