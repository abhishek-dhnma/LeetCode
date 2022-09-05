1. Check cur is exist or not
2. if exist then check if cur ka next exist or not
3. if exist then check if cur ka data or cur ke next ka data same hai ya ni
4. agar same hai to cur ke next me cur ke next ka next daldo
5. and memory leak na ho to usse phale cur ke next ka pointer same krlo baad me delete kr dena jab cur k next me cur ke next ka next ko point krne lage us time free/delete krdo temp ko kuki uski koe jarurt ni hai ab ko duplicate wala node hai HAPPY ;)
​
```
while(cur){
if(cur->next and cur->val == cur->next->val){
ListNode * temp = cur->next;
cur->next = cur->next->next;
delete temp;
}else{
cur = cur->next;
}
}
```