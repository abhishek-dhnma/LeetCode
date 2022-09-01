Brute Force
```
class Solution {
public:
ListNode* removeNthFromEnd(ListNode* head, int n) {
// BRUTE FORCE
int l = 0;
ListNode * temp = head;
while(temp){
l++;
temp = temp->next;
}
int diff = l-n;
if( diff == 0){
head = head->next;
//out << "1st" << endl;
return head;
}
ListNode * pre ;
ListNode * cur = head;
while(diff-- > 0){
pre = cur;
cur = cur->next;
}
pre->next = cur->next;
delete cur;
return head;
}
};
```
​