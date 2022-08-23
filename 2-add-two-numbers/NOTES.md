1. Code 1
```
class Solution {
public:
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
int carry = 0;
int sum = 0;
ListNode * ans_head = new ListNode();
ListNode * aaa = ans_head;
while(l1 and l2){
sum = l1->val + l2->val + carry;
carry = sum/10;
ans_head->next = new ListNode((sum%10));
l1 = l1->next;
l2 = l2->next;
ans_head = ans_head->next;
}
while(l1){
sum = l1->val + carry;
carry = sum/10;
ans_head->next = new ListNode((sum%10));
l1 = l1->next;
ans_head = ans_head->next;
}
while(l2){
sum =  l2->val + carry;
carry = sum/10;
ans_head->next = new ListNode((sum%10));
l2 = l2->next;
ans_head = ans_head->next;
}
if(carry){
ans_head->next = new ListNode(carry);
}
return aaa->next;
}
};
```