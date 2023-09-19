#include <iostream>
using namespace std;

// --------------- A simple Example for friend function ---------------
class human
{
private:
  string name;
  int age;
  int id;

public:

  human(string name, int age, int id)  // parametrize constructor three parameters
  {
    this -> name = name;
    this -> age = age;
    this -> id = id;
  }

  void show()
  {
    cout<<"Name: "<<name<<endl;
    cout<<"Age: "<<age<<endl;
    cout<<"ID: "<<id<<endl;
  }

  friend void friend_function(human ob1);  // friend function
};

void friend_function(human ob1)
{
  // we can acsess in all attributes and functions in the class after using friend keyword.
  // cout<<"Name: "<<ob1.name;
  // cout<<"Age: "<<ob1.age;
  // cout<<"ID: "<<ob1.id;
  ob1.show();
}

// --------------- The Task for friend function ---------------
/*
* Write a C++ program that has 2 Classes of 
* doctors and patients. Then create a function 
* that can access all members in the classes and 
* then show them all on the screen.

* Each Class has 2 Attributes and one print 
* function and assigning constructor
*/

class doctors
{
private:
  string name;
  int age;

public:
  doctors(string name, int age)
  {
    this -> name = name;
    this -> age = age;
  }

  void print()
  {
    cout<<"Name: "<<name<<"\n";
    cout<<"Age: "<<age<<"\n";
  }

  friend void friend_doctors(doctors doc1);
};

class patients
{
private:
  string name;
  int age;

public:

  patients(string name, int age)
  {
    this -> name = name;
    this -> age = age;
  }

  void print()
  {
    cout<<"Name: "<<name<<"\n";
    cout<<"Age: "<<age<<"\n";
  }
  
  friend void friend_patients(patients pat1);
};


void friend_doctors(doctors doc1)
{
  doc1.print();
}

void friend_patients(patients pat1)
{
  pat1.print();
}

int main()
{
// --------------- A simple Example for friend function ---------------
  human ob("Ahmed Badawi", 20, 2200091);
  friend_function(ob);

/*
? The output will be :

* Name: Ahmed Badawi
* Age: 20
* ID: 2200091

*/
// --------------- The Task for friend function ---------------
  doctors doctor1("Ahmed", 25);
  friend_doctors(doctor1);
  cout<<"\n";

  doctors doctor2("Ali", 30);
  friend_doctors(doctor2);
  cout<<"\n";

  patients patient1("Aliaa", 18);
  friend_patients(patient1);
  cout<<"\n";

  patients patient2("Amr",55);
  friend_patients(patient2);

/*
? The output will be :

* Name: Ahmed
* Age: 25

* Name: Ali
* Age: 30

* Name: Aliaa
* Age: 18

* Name: Amr
* Age: 55

*/

  return 0;
}
