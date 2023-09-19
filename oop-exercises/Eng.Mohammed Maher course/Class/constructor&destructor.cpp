#include <iostream>
using namespace std;

// ---------------- constructor Example ----------------
class human
{
private:
  string name;
  int age;
  int id;

public:
// The constructor should create in public and we can create many constructors
  human()   // empty constructor
  {
    cout<<"Created The Empty Constructor\n\n";
  }
  
  human(string name)  // parametrize constructor with one parameter
  {
    this -> name = name;
  }

  human(string name, int age)  // parametrize constructor two parameters
  {
    this -> name = name;
    this -> age = age;
  }

  human(string name, int age, int id)  // parametrize constructor three parameters
  {
    this -> name = name;
    this -> age = age;
    this -> id = id;
  }

  void show2()
  {
    cout<<"Name: "<<name<<"\n\n";
  }

  void show3()
  {
    cout<<"Name: "<<name<<"\n";
    cout<<"Age: "<<age<<"\n\n";
  }

  void show4()
  {
    cout<<"Name: "<<name<<endl;
    cout<<"Age: "<<age<<endl;
    cout<<"ID: "<<id<<endl;
  }
};

// ---------------- Destuctor Example ---------------
class destuctor
{
private:
  string name;
  int age;
  int id;

public:
  destuctor()  // empty constructor
  {
    cout<<"-------------------------\n";
    cout<<"Welcome\n";
  }

  void programe()
  {
    cout<<"\nThe Programm\n";
  }

  ~destuctor()
  {
    cout<<"\nThe End of the programm  \n";
    cout<<"-------------------------\n";
  }
};

int main()
{
// ---------------- constructor Example -------------
  human h1;

  human h2("Ali");
  h2.show2();

  human h3("Aliaa" ,25);
  h3.show3();

  human h4("Ahmed Badawi", 20, 2200091);
  h4.show4();

/*
? The output will be:

* Created The Empty Constructor

* Name: Ali

* Name: Aliaa
* Age: 25

* Name: Ahmed Badawi
* Age: 20
* ID: 2200091
*/

// ---------------- Destuctor Example ---------------

  destuctor ob1;
  ob1.programe();

/*
? The output will be 
* -------------------------
* Welcome

* The Programm

* The End of the programm
* -------------------------
*/
  return 0;
}

