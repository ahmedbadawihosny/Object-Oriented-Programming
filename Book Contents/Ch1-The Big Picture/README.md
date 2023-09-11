<h1 align="center"> Chapter 1: The Big Picture </h1>

## Introduction

* This book teaches you how to program in C++, a computer language that supports object-oriented programming (OOP). Why do we need OOP? What does it do that traditional languages such as C, Pascal, and BASIC don’t? What are the principles behind OOP? Two key concepts in OOP are objects and classes. What do these terms mean? What is the relationship between C++ and the older C language?

* This chapter explores these questions and provides an overview of the features to be discussed in the balance of the book. What we say here will necessarily be rather general (although mercifully brief). If you find the discussion somewhat abstract, don’t worry. The concepts we mention here will come into focus as we demonstrate them in detail in subsequent chapters.

<br>
<hr>

### In This Chapter we will learn :

- [1.1 Why Do We Need OOP?](#11-why-do-we-need-oop)
  - Procedural Languages
  - The Object-Oriented Approach

- [1.2 Characteristics of Object-Oriented Languages](#12-characteristics-of-object-oriented-languages)
  - Objects
  - Classes
  - Inheritance
  - Reusability
  - Creating New Data Types
  - Polymorphism and Overloading

- [1.3 C++ and C](#13-c-and-c)
- [1.4 Laying the Groundwork](#14-laying-the-groundwork)
- [1.5 The Unified Modeling Language (UML)](#15-the-unified-modeling-language-uml)
- [Summarize in Points](#summarize-in-points)
- [Questions & Answers](#questions--answers)

<br>
<hr>

## 1.1 Why Do We Need OOP?

* ### **Procedural Languages**
  C, Pascal, FORTRAN, and similar languages are procedural languages. That is, each statement in the language tells the computer to do something: Get some input, add these numbers, divide by six, display that output. A program in a procedural language is a list of instructions.

  >For very small programs, no other organizing principle (often called a paradigm) is needed. The programmer creates the list of instructions, and the computer carries them out.


* #### **Division into Functions**

  When programs become larger, a single list of instructions becomes unwieldy, For this reason the function was adopted as a way to make programs more comprehensible to their human creators. 

   A procedural program is divided into functions, and (ideally, at least) each function has a clearly defined purpose and a clearly defined interface to the other functions in the program.

  The idea of breaking a program into functions can be further extended by grouping a number of functions together into a larger entity called a module.

  Dividing a program into functions and modules is one of the cornerstones of structured programming, the somewhat loosely defined discipline that influenced programming organization for several decades before the advent of object-oriented programming.

<br>

* #### **Problems with Structured Programming**

  As programs grow ever larger and more complex, even the structured programming
  approach begins to show signs of strain.

  Analyzing the reasons for these failures reveals that there are weaknesses in the procedural
  paradigm itself. No matter how well the structured programming approach is implemented,
  large programs become excessively complex.

  What are the reasons for these problems with procedural languages? There are two related
  problems. First, functions have unrestricted access to global data. Second, unrelated functions
  and data, the basis of the procedural paradigm, provide a poor model of the real world.

<br>

* #### **Unrestricted Access**

  In a procedural program, one written in C for example, there are two kinds of data.

  Local data is hidden inside a function, and is used exclusively by the function.

  In the inventory program a display function might use local data to remember which item it
  was displaying. 

  Local data is closely related to its function and is safe from modification by other functions.


  However, when two or more functions must access the same data—and this is true of the most
  important data in a program—then the data must be made global, as our collection of inventory items is.


  The
  arrangement of local and global variables in a procedural program is shown in this picture:

  <br>

  <p align="center">
  <img src="../../img/Images for the book contact/ch1/FIGURE 1.1.png" width ="500">
  </p>

  In a large program, there are many functions and many global data items. The problem with
  the procedural paradigm is that this leads to an even larger number of potential connections
  between functions and data, as shown in this picture:

  <br>

  <p align="center">
  <img src="../../img/Images for the book contact/ch1/FIGURE 1.2.png" width ="500">
  </p>

  >This large number of connections causes problems in several ways. First, it makes a program’s structure difficult to conceptualize. Second, it makes the program difficult to modify. A change made in a global data item may necessitate rewriting all the functions that access that item.

  When data items are modified in a large program it may not be easy to tell which functions
  access the data, and even when you figure this out, modifications to the functions may cause
  them to work incorrectly with other global data items.

<br>

* #### **Real-World Modeling**

  The second—and more important—problem with the procedural paradigm is that its
  arrangement of separate data and functions does a poor job of modeling things in the
  real world. 

<br>

* #### **Attributes**

  Examples of attributes (sometimes called characteristics) are, for people, eye color
  and job title; and, for cars, horsepower and number of doors. 

<br>

* #### **Behavior**

  Behavior is something a real-world object does in response to some stimulus. If you
  ask your boss for a raise, she will generally say yes or no.

  Behavior is like a function: you call a function to do something (display the inventory,
  for example) and it does it.

  >So neither data nor functions, by themselves, model real-world objects effectively.
<br>

* #### **The Object-Oriented Approach**

  The fundamental idea behind object-oriented languages is to combine into a single
  unit both data and the functions that operate on that data. Such a unit is called an
  object.

  An object’s functions, called member functions in C++, typically provide the only way to
  access its data. 

  If you want to read a data item in an object, you call a member function in the
  object, It will access the data and return the value to you,and You can’t access the data directly.

  The data is hidden, so it is safe from accidental alteration. Data and its functions are said to be
  encapsulated into a single entity. Data encapsulation and data hiding are key terms in the
  description of object-oriented languages.


  A C++ program typically consists of a number of objects, which communicate with each other
  by calling one another’s member functions. The organization of a C++ program is shown in this picture:

  <p align="center">
  <img src="../../img/Images for the book contact/ch1/FIGURE 1.3.png" width ="500">
  </p>

  >We should mention that what are called member functions in C++ are called methods in some other object-oriented (OO) languages

    * An Analogy

  You might want to think of objects as departments—such as sales, accounting, personnel, and so on—in a company.

  This view of corporate organization is shown in this picture:

  <p align="center">
  <img src="../../img/Images for the book contact/ch1/FIGURE 1.4.png" width ="500">
  </p>


    * OOP: An Approach to Organization
    >Keep in mind that object-oriented programming is not primarily concerned with the details of program operation.

<br>

## 1.2 Characteristics of Object-Oriented Languages

  Let’s briefly examine a few of the major elements of object-oriented languages in
  general, and C++ in particular.

* #### **Objects**

  When you approach a programming problem in an object-oriented language, you no longer ask how the problem will be divided into functions, but how it will be divided into objects.

  What kinds of things become objects in object-oriented programs? The answer to this is limited only by your imagination, but here are some typical categories to start you thinking:

  - Physical objects
  - Elements of the computer-user environment
  - Data-storage constructs
  - Human entities
  - Collections of data
  - User-defined data types
  - Components in computer games

  The match between programming objects and real-world objects is the happy result of combining data and functions: The resulting objects offer a revolution in program design.

<br>

* #### **Classes**
  In OOP we say that objects are members of classes.

  A class serves as a plan, or blueprint. It specifies what data and what functions will be included in objects of that class. Defining the class doesn’t create any objects, just as the mere existence of data type int doesn’t create any variables.

  A class and its objects example in this picture:

  <p align="center">
  <img src="../../img/Images for the book contact/ch1/FIGURE 1.5.png" width ="500">
  </p>

  A class is thus a description of a number of similar objects.
<br>

* #### **Inheritance**

  The idea of classes leads to the idea of inheritance. In our daily lives, we use the concept of classes divided into subclasses. We know that the animal class is divided into mammals, amphibians, insects, birds, and so on. 

  Inheritance example in this picture:

  <p align="center">
  <img src="../../img/Images for the book contact/ch1/FIGURE 1.6.png" width ="500">
  </p>

  In a similar way, an OOP class can become a parent of several subclasses. In C++ the original class is called the base class; other classes can be defined that share its characteristics, but add their own as well. These are called derived classes.

  Inheritance is somewhat analogous to using functions to simplify a traditional procedural program.
<br>

* #### **Reusability**

  Once a class has been written, created, and debugged, it can be distributed to other programmers for use in their own programs. This is called reusability. It is similar to the way a library of functions in a procedural language can be incorporated into different programs.

  However, in OOP, the concept of inheritance provides an important extension to the idea of
  reusability.
<br>

* #### **Creating New Data Types**

  One of the benefits of objects is that they give the programmer a convenient way to
  construct new data types. 

  You would like to
  express operations on these positional values with normal arithmetic operations,
  such as

  ```position1 = position2 + origin```

  where the variables position1, position2, and origin each represent a pair of independent numerical quantities. By creating a class that incorporates these two values,
  and declaring position1, position2, and origin to be objects of this class, we can,
  in effect, create a new data type. 

<br>

* #### **Polymorphism and Overloading**

  Note that the = (equal) and + (plus) operators, used in the position arithmetic shown above, don’t act the same way they do in operations on built-in types such as int.

  The objects position1 and so on are not predefined in C++, but are programmer-defined objects of class Position.

  Using operators or functions in different ways, depending on what they are operating on, is called polymorphism

  When an existing operator, such
  as + or =, is given the capability to operate on a new data type, it is said to be overloaded.

  >Overloading is a kind of polymorphism; it is also an important feature of OOP.

<br>

## 1.3 C++ and C

C++ is derived from the C language. Strictly speaking, it is a superset of C: Almost
every correct statement in C is also a correct statement in C++, although the reverse is
not true.

The most important elements added to C to create C++ concern classes, objects, and object-oriented programming. (C++ was originally called “C with classes.”)

However, C++ has many other new features as well, including an improved
approach to input/output (I/O) and a new way to write comments. Figure 1.7 shows
the relationship of C and C++.

<p align="center"><img src="../../img/Images for the book contact/ch1/FIGURE 1.7.png" width ="500"> </p>

<br>

> the practical differences between C and C++ are larger than you might think. Although you can write a program in C++ that looks like a program in C, hardly anyone does. C++ programmers not only make use of the new features of C++, they also emphasize the traditional C features in different proportions than do C programmers.

<br>

## 1.4 Laying the Groundwork

Our goal is to help you begin writing OOP programs as soon as possible. However, as
we noted, much of C++ is inherited from C, so while the overall structure of a C++
program may be OOP, down in the trenches you need to know some old-fashioned
procedural fundamentals.


The specific discussion of OOP starts in Chapter 6, “Objects and Classes.” From then on the
examples will be object oriented.

<br>

## 1.5 The Unified Modeling Language (UML)

The UML is a graphical “language” for modeling computer programs. “Modeling” means to create a simplified representation of something.


The UML provides a way to visualize the higher-level organization of programs without getting mired down in the details of actual code.


The UML began as three separate modeling languages, one created by Grady Booch at Rational Software, one by James Rumbaugh at General Electric, and one by Ivar Jacobson at Ericson.


Why do we need the UML?


The most important part of the UML is a set of different kinds of diagrams.


The UML plays many roles besides helping us to understand how a program works.


The UML is not a software development process.


As we noted in the Introduction, we introduce specific features of the UML in stages throughout the book.
- Chapter 1: (this section) introduction to the UML
- Chapter 8: class diagrams, associations, and navigability
- Chapter 9: generalization, aggregation, and composition
- Chapter 10: state diagrams and multiplicity
- Chapter 11: object diagrams
- Chapter 13: more complex state diagrams
- Chapter 14: templates, dependencies, and stereotypes
- Chapter 16: use cases, use case diagrams, activity diagrams, and sequence diagrams

<br>

## Summarize in Points

- OOP is a way of organizing programs.
- The emphasis is on the way programs are designed, not on coding details.
- In particular, OOP programs are organized around objects, which contain both data and functions that act on that data.
- A class is a template for a number of objects.
- Inheritance allows a class to be derived from an existing class without modifying it.
- The derived class has all the data and functions of the parent class, but adds new ones of its own.
- Inheritance makes possible reusability, or using a class over and over in different programs.
- C++ is a superset of C. It adds to the C language the capability to implement OOP. It also adds a variety of other features. In addition, the emphasis is changed in C++ so that some features common to C, although still available in C++, are seldom used, while others are used far more frequently. The result is a surprisingly different language.
- The Unified Modeling Language (UML) is a standardized way to visualize a program’s structure and operation using diagrams.


> The general concepts discussed in this chapter will become more concrete as you learn more about the details of C++. You may want to refer back to this chapter as you progress further into this book.

<!---
- OOP is a way of organizing programs.
- OOP programs are organized around objects.
- Objects contain both data and functions.
- A class is a template for number of objects.
- The derived class inherit all data and functions from the parent class.
- Inheritance makes possible reusability.
- C++ is a superset of C.
- The Unified Modeling Language (UML) is a way to visualize a program’s structure.

-->

<br>

## Questions & Answers

1. Pascal, BASIC, and C are `procedural` languages, while C++ is an `object oriented` programming language.
2. A widget is to the blueprint for a widget as an object is to `a class`
3. The two major components of an object are `data` and functions that `act on that data`.
4. In C++, a function contained within a class is called `a member function`.
5. Protecting data from access by unauthorized functions is called `Data Hiding`.
6. Which of the following are good reasons to use an object-oriented language?
 `You can define your own data types and It’s easier to conceptualize an OO program.`
7. `Object` model entities in the real world more closely than do functions.
8. True or false: A C++ program is similar to a C program except for the details of coding. `False` becuase the organizational principles are different.
9. Bundling data and functions together is called `Encabsulation`.
10. When a language has the capability to produce new data types, it is said to be `extensible`.
11. True or false: You can easily tell, from any two lines of code, whether a program is written in C or C++. `False` becuase most lines of code are the same in C and C++.
12. The ability of a function or operator to act in different ways on different data types is called `polymorphism`.
13. A normal C++ operator that acts in special ways on newly defined data types is
said to be `overloaded`.
14.  Memorizing the new terms used in C++ is `something you can return to later`.
15. The Unified Modeling Language is `a way to look at the organization of a program and helpful in developing software systems`.