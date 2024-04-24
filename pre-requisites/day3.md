# STORAGE CLASSES
> This concept is present only in C and C++. 

* Storage classes tells us the behaviour of a class or variable
* It also tells how the classes and variables react to different situations.
<br>
This gives us clarity on which variables

There are 4 different types storage classes:
<ul>
    <li> Auto </li>
    <li> Static </li>
    <li> Extern </li>
    <li> Register </li>
</ul>

The Storage classes are categorized and compared on these 4 parameters.
* Storage
* Scope
* Default Value
* Life time.

<i> In C/C++ if we declare the a variable without any storage class, it by default goes into auto class</i><br>
<strong>To change the storage class, just mention the storage class before the declaration of the variable</strong><br>
Ex:<br>
<ul>
    <li>int a; -> auto class
    <li>static int a; -> 
</ul> 


1) Auto:
* The auto variables are stored in RAM
* The variable has block scope*.
* By default garbage value is stored in the auto variables
* The life time of the variable is block     
<i>Note! block scope means the variable is available only in the block it has been created in.</i>

2) Static:
* The static variables are stored in RAM
* The variable has block scope.
* By default 0 is stored in the static variables
* The life time of the variable is program     
<i>Note! The word program above means the variable is available in the whole program.</i>

3) Extern:
* The extern variables are stored in RAM
* The variable has program scope.
* By default 0 is stored in the extern variables
* The life time of the variable is program     

4) Register:
* The register variables are stored in registers.
* The variable has block scope.
* By default grabage value is stored in the extern variables
* The life time of the variable is block     

# DATA STRUCURES AND ALGORITHMS

## POINTERS
    
* These are special variables that can store the addresses of other normal variables that store data.
    
```
    int data = 10;
    int* ptr = &data; 
    /* &data is called reference variable, this is the part of / another variable that stores the 
    address of the variable data.*/
```    
    
1) Typed Pointers
    * Those pointers that are created for storing the addresses of only that specific data type in which it is declared.
    * They are declared to specific data types.
    * Ex: `int *ptr` -> points only to `Integer` data only.
    * Similarly, we can create pointers for user defined data types too.
    * Ex: `class Node` is the user defined data type & `Node* ptr` declares ptr as a pointer of type `Node`.

2) Untyped Pointers
    * Untyped pointers do not have any data type.
    * They are generic pointers
    * They can point to any type of values.
    * Ex: `void *ptr` -> ptr does not have any data type.
    * If you want to point the pointer to some data, then ptr should be 1st type casted to that data type.

`Wild pointers are auto pointers that points to some garbage memory. Hence always initialize your pointers.`
* To neutralize _Wild pointer_ is to convert it into **NULL pointer**.

`Dangling pointer is a pointer that points to a non-existing memory location.`
* _Dangling pointer_ occurs when you free up an allocated memory space, but the pointer still points to that location.
* To neutralize _Dangling pointer_ is to convert it into **NULL pointer**.

`Double pointer is a pointer that stores the address of another pointer.`
> Ex:<br> int i = 15;<br> int *ptr = &i;<br> int **dptr = &ptr;<br>



## **LINKED LIST**

* `Nodes` are `linked` together to form a `list`.

Linked list was created as arrays can only store limited homogenous type of data.

* `Nodes` can store multiple data of multiple types.
* Every node is divided into 2 parts `data` and `address of next node`.
* The node can be made by using _Strucures_, _Unions_ or _Classes_.

# ASSIGNMENT

Given an array containing n integers. The problem is to find the sum of the elements of the contiguous subarray having the smallest(minimum) sum.

Examples: 

Input : arr[] = {3, -4, 2, -3, -1, 7, -5}
Output : -6
Subarray is {-4, 2, -3, -1} = -6

Input : arr = {2, 6, 8, 1, 4}
Output : 1