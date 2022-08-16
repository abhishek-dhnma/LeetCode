This question can be solved by two ways.
1. using two loops
```
class Solution {
public:
ListNode* mergeNodes(ListNode* head) {
ListNode ans, *tail = &ans;
while(head){
int sum = 0;
if(head->val == 0) head = head->next;
if(!head) break;
while(head->val != 0){
sum = sum + head->val;
head = head->next;
}
tail->next =   new ListNode(sum);
tail = tail->next;
}
return ans.next;
}
};
```
2. using one loop
```
class Solution {
public:
​
ListNode* mergeNodes(ListNode* head) {
int sum = 0;
ListNode ans;
ListNode *tail = &ans;
while(head){
if(head->val == 0){
tail->next =  new ListNode(sum);
tail = tail->next;
sum = 0;
}else{
sum = sum + head->val;
}
head = head->next;
}
return ans.next->next;
}
};
```