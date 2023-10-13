#include <iostream>
using namespace std;

//=============== first example ===============

class human
{
public:
  void speak()
  {
    cout<<"I can speak\n";
  }

private:
  void eat()
  {
    cout<<"I can eat\n";
  }

protected:
  void read()
  {
    cout<<"I can read\n";
  }
};

class student : public human
{
public:

  void study()
  {
    cout<<"I cam study\n";
  }
  void get_protected_functions()
  {
    read();
  }
};

//=============== second example ===============

class numbers
{
public:
  int a = 1;
private:
  int b = 2;
protected:
  int c = 3;
};

class number : public numbers
{
public:
  int d = 4;

  void get_hidden()
  {
    cout<<"a = "<<a<<"\n"<<"c = "<<c<<"\n";
  }
};

//=============== third example ===============
class human_variables
{
protected:
  string name;
  int age;
};

class Human_var : public human_variables
{
public:
  void set_name(string name)
  {
    this -> name = name;
  }

  void set_age(int age)
  {
    this -> age = age;
  }

  string get_name()
  {
    return name;
  }

  int get_age()
  {
    return age;
  }
};

//=============== fourth example ===============

class sections
{
public:
  string name;
  int number;
  int students_number;

  sections()
  {
    cout<<"welcome to our section from class 'sections'\n";
  }
};

class my_section : public sections
{
public:
  my_section()
  {
    cout<<"welcome to our section from class 'my_section'\n";
  }

  void set_data()
  {
    cout<<"\n----------------------------\n";
    cout<<"Enter Name: ";
    cin>>name;
    cout<<"Enter Number: ";
    cin>>number;
    cout<<"Enter Number of students: ";
    cin>>students_number;
    cout<<"\n----------------------------\n";
  }

  void show_data()
  {
    cout<<"\n----------------------------\n";
    cout<<"Name: "<<name<<"\n";
    cout<<"Number: "<<number<<"\n";
    cout<<"Number of students: "<<students_number<<"\n";
    cout<<"\n----------------------------\n";
  }
};

int main()
{
//------------ example1 ------------
  student st1;
  
  st1.speak();
  st1.study();
  st1.get_protected_functions();

/*
? the output will be:
* I can speak
* I cam study
* I can read
*/

//------------ example2 ------------

  number num;
  num.get_hidden();
  cout<<"d = "<<num.d<<"\n";

/*
? the output will be:
* a = 1
* c = 3
* d = 4
*/

//------------ example3 ------------
  Human_var h;
  h.set_name("Ahmed");
  h.set_age(20);

  cout<<"Name: "<<h.get_name()<<"\n"
      <<"Age: "<<h.get_age()<<"\n";

/*
? the output will be:
* Name: Ahmed
* Age: 20
*/

//------------ example4 ------------

  my_section s;
  s.set_data();
  s.show_data();

/*
? the output will be:
* ----------------------------
* Enter Name: Ahmed
* Enter Number: 22
* Enter Number of students: 5
* 
* ----------------------------
* 
* ----------------------------
* Name: Ahmed
* Number: 22
* Number of students: 5
* 
* ----------------------------
*/

  return 0;
}

