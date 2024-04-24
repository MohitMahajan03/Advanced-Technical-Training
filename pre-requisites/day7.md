# PRIORITY QUEUES

* The element with highest priority is placed at the front.
* The lowest priority eleemnts are placed at the back.
* The elements in the Queue are always sorted based on priority.
* They are used to improve efficiencies of Dijkstra and other shortest path algorithms.
* if 2 elements have same priority their order is followed for dequeue.

###### Types of Priority Queue
1) Ascending order
2) Descending order

> Priority Queues are implemented using Array, Linked List, BST and Heap


# TREES

* Elements are stored in the form of nodes and leaves.
* The nodes are accessed in 3 ways.
    1) in-order
    2) pre-order
    3) post-order

#### Binary tree
* Each node will have max of 2 children.
* Elements can be stored in any order.

#### Binary search tree (BST)
* Same as Binary tree.
* Elements are stored in a particular order.
* The tree is balanced.
> Operations on BST are easier.

> Inorder traversal of BST returns an ordered list

#### DFS
1) pre-order
    * Data->left->right
2) in-order
    * left->Data->right
3) post-order
    * left->right->Data


> BFS and DFS are done on trees

> Helps in searching and sorting more efficiently than linked list.

## ITERATION
* Uses loops                           
* fast                                      
* Less memory usage                     
* Less computational power consumed             

## RECURSION

* Uses functions
* Slow
* More memory usage
* More computational power used