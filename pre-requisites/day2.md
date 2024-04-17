# OBJECT ORIENTED PROGRAMING
-> Names of classes usually start with a capital letter.

Access Specifiers
1) Public
2) Private
3) Protected
4) Default: by default, default is private.

Constructor are methods that constructs the object
1) It constructs the object.
2) and initialize the attributes.
-> You write constructor when you have attributes in your class. Else the default constructor will take care.

In C++ we have,
1) Default Constructor -> most used
2) Parameterized Constructor -> most used
3) Copy Constructor
4) Move Constructor

Destruct is used to destroy (free up space) the object


# INHERITANCE

Inheriting the properties of one class into another. Inorder to reuse the functinality and avoid redundancy.

Types of inheritance:
1) Single inheritance
2) Multilevel inheritance
3) Multiple inheritance
4) Hierarchical inheritance
5) Hybrid inheritance

The implementation of inhertance varies slightly in different languages

# POLYMORPHISM

Poly meaning many and Morph meaning forms.

The process of having many different forms in one state is called as polymorphism.

We try to make functions polymorphic so that they can behave differently in different situations.

-> There are 2 types of polymorphism for statically typed languages.
1) Compile time
    * Static polmorphism
    * Early binding
    * Function overloading
2) Run time 
    * Dynamic polymorphism
    * Late binding
    * Function Overriding

Polymorphism occurs when function has same name in 2 different classes or the same class.

1) Compile time polmorphism

    * When we have 2 functions with same name in the same class.
        * This is called function overloading.
        * Either the data type of the parameters or number of parameters in the 2 functions.

        In python compile time polymorphism is achieved using parameterized methods.
        Hence we mimic the polymorphism in a single function.

2) Runtime polymorphism

    * We have 2 fucntions with the same name in 2 different classes.
        we inherit one class into the other class and override it.
        Hence achieving runtime polymorphism.

# ASTRACTION
Hiding the data so that the user can only see the functionality.
* But from whom are you hiding the data? Ans: The main function.

<strong>Abstraction is achieved in C++ by using private access specifier.</strong><br>
In JAVA we use abstract keyword.<br>
    <i>!Warning! Astract keyword used for a class abstracts only the class but not its methods.</i><br>
<strong>Interfaces in JAVA provide complete abstraction</strong>

# ENCAPSULATION

Protecting the data from external factors is known as encapsulation<br>
<i><strong>Private access specifiers efficiently encapsulates the attributes and methods</i></strong>

* getters and setters functions are used to access and modify these private variables.


# Assignment Question

Given random array of any size, you can fill it with 0s, 1s, 2s and the array has to be sorted