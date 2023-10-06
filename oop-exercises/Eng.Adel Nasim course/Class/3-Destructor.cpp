/*
* destractor has the same name of the class
* we write ' ~ ' before the destractor
* it dosn't take any parameters and don't return
* values and don't write void before it
* the class have one destractor
* the destractor delete the object from
* dynamic memory.
* it delete the object from 
*/

#include <iostream>
using namespace std;

//================== Rectangle class ====================//
class Rectangle {
  // private:   we can do that or not
    int W;
    int H;
  public:
  Rectangle():W(1),H(2)       // 1 2 example that shoe to you that this the first output
  {
    cout<<"W = "<<W<<" "<<"H = "<<H<<"\n"<<"output empty constractor\n============================\n";
  }

  Rectangle(int a,int b):W(a),H(b)
  {
    cout<<"A Rectangle has been created\n";
    Rectangle ob;                   // go to empty constractor print first in the terminal 
  }

  //   Rectangle(int a,int b)
  // {
  //   W = a;
  //   H = b;
  //   cout<<"A Rectangle has been created\n";
  // }

  ~Rectangle(){
    cout<<"W= "<<W<<" "<<"H= "<<H<<"\n"
    <<"A Rectangle has been deleted\n"<<"output destractor\n============================\n";
  }

};

//================== Phone class ====================//

class phone{
  string name;
  string model;
  int price;

public:
  phone() {}
  phone(string n, string m,int p)
  {
    name = n;
    model = m;
    price = p;
  }

  void print();
  ~phone();
};

void phone::print()      // :: ==> scope resolution
{
  cout<<"Name = "<<name<<"\n"
  <<"Model = "<<model<<"\n"
  <<"Price = "<<price<<"\n";
}

phone::~phone()
{
  cout<<"object destucted\n";
}

class Student{
  string name;
  int id;
public:
  Student()
  {
    cout<<"Object created\n";
  }
  ~Student()
  {
    cout<<"Object destructed\n";
  }
  void set_Name_ID(string n,int i)
  {
    name = n;
    id = i;
  }
  void print()
  {
    cout<<"The Name of student is: "<<name<<"\n"
    <<"The Id of student is: "<<id<<"\n";
  }
};

void student_function(Student S)
{
  Student S1;
  S1 = S;
  S.set_Name_ID("Ali",12345);
  S.print();
  S1.print();
}

int main(){
  //============= Rectangle class =============//

  cout<<"============================\n";
  Rectangle R1(3,4),R2(5,6);
  Rectangle R3;

  //============= Phone class =============//
  phone ob1,ob2("Samsung","A10",2500); 
  ob2.print();

  //============= Student class =============//

  Student St1,St2;
  St1.set_Name_ID("Ahmed", 2200091);
  St2.set_Name_ID("Badawi", 2200095);
  cout<<"Going to Function\n";
  student_function(St1);  // Here it is has object from student class not any thing, it only object student class
  cout<<"Back from Function\n";
  St1.print();
}