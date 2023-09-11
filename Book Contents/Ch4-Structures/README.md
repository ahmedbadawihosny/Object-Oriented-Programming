<h1 align="center"> Chapter 4: Structures </h1>

### In This Chapter we will learn :

* [4.1 Structures](#41-structures)
  - A Simple Structure 
  - Defining the Structure 
  - Defining a Structure Variable 
  - Accessing Structure Members
  - Other Structure Features 
  - A Measurement Example 
  - Structures Within Structures 
  - A Card Game Example 
  - Structures and Classes

* [4.2 Enumerations](#42-Enumerations) 
  - Days of the Week
  - One Thing or Another 
  - Organizing the Cards
  - Specifying Integer Values 
  - Not Perfect
  - Other Examples

* [Summary](Summary)
* [Questions](Questions)
* [Exercises](Exercises)

## 4.1 Structures

<br>

## 4.2 Enumerations

<br>

| Class  | Structure |
| :----: | :------: |
| 1. Members of a class are private by default. | 1. Members of a structure are public by default. |
| 2. An instance of a class is called an ‘object’.| 2. An instance of structure is called the ‘structure variable’. |
| 3. Member classes/structures of a class are private by default but not all programming languages have this default behavior eg Java etc.| 3. Member classes/structures of a structure are public by default. |
| 4. It is declared using the class keyword.| 4. It is declared using the struct keyword. |
| 5. It is normally used for data abstraction and further inheritance.| 5. It is normally used for the grouping of data |
| 6. NULL values are possible in Class. | 6. NULL values are not possible. |
| 7. Syntax: | 7. Syntax: |

class:

 ```cpp
class class_name{
  data_member;
  member_function;
  };
```

Structure:

```cpp
   struct structure_name{

         type structure_member1;

         type structure_member2;

   };
```

<!-- Class
1. Members of a class are private by default.
2. An instance of a class is called an ‘object’.
3. Member classes/structures of a class are private by default but not all programming languages have this default behavior eg Java etc.
4. It is declared using the class keyword.
5. It is normally used for data abstraction and further inheritance.
6. NULL values are possible in Class.
7. Syntax:

 class class_name{

         data_member;

         member_function;

  };

Structure
1. Members of a structure are public by default.
2. An instance of structure is called the ‘structure variable’.
3. Member classes/structures of a structure are public by default.
4. It is declared using the struct keyword.
5. It is normally used for the grouping of data
6. NULL values are not possible.
7. Syntax:

   struct structure_name{

         type structure_member1;

         type structure_member2;

   }; -->