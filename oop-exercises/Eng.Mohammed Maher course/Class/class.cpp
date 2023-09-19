#include <iostream>
using namespace std;

class human 
{
public:
  string name;
  int age;
  int id;

  void show()
  {
    cout<<"-------------------------------- \n";
    cout<<"Name: "<<name<<"\n"
    <<"Age: "<<age<<"\n"<<"Id: "<<id<<"\n"
    <<"Num: "<<num<<"\n";
    cout<<"-------------------------------- \n";
  }

  void set_num(int num){
    this -> num = num;
  }

  void setter(string name, int age, int id, int num)
  {
    this -> name = name;
    this -> age = age;
    this -> id = id;
    this -> num = num;
  }

private:
  int num;
};

int main()
{
  human h1;

  // h1.name = "Ahmed Badawi";
  // h1.age = 20;
  // h1.id = 2200091;
  // h1.set_num(250);

  h1.setter("Ahmed BAdawi", 20, 2200091, 250);
  h1.show();

  return 0;
}

/*
? the output will be : 

* -------------------------------- 
* Name: Ahmed BAdawi
* Age: 20
* Id: 2200091
* Num: 250
* -------------------------------- 
*/