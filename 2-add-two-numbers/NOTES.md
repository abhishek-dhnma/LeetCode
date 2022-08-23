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
​
2. Code 2 - Consise Code - All handle in one loop
```
class Solution {
public:
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
int carry = 0;
int sum = 0;
ListNode * ans_head = new ListNode();
ListNode * aaa = ans_head;
while(l1 || l2 || carry){
sum = (l1? l1->val : 0) + (l2? l2->val : 0) + carry;
carry = sum/10;
ans_head->next = new ListNode((sum%10));
if(l1) l1 = l1->next ;
if(l2) l2 = l2->next ;
ans_head = ans_head->next;
}
return aaa->next;
}
};
```