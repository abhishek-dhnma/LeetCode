IN preorder -  we use stack for iterative way.
Recursive Algo -  we use normal recursive way
​
we create a empty stack.
(its kind off level order algo Which uses QUEUE)
​
stack top assign to root node (preparation)
and pop that from stack [ preorder - < root left right >  ]
that root is our ans
then we will check if it have right node or left node.
we check that in reverse order in right first then left
because we are uisng stack so it have LIFO property So
right become left vice versa when we pop that from stack.
ending conditon when our stack become empty its mean we process all the nodes from the stack.
​
​
​
​