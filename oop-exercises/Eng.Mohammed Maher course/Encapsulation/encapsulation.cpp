#include <iostream>
#include <iomanip>
using namespace std;

class student
{
private:
  string name;
  int age;
  int order;

public:
  void setName(string name)
  {
    this -> name = name;
  }

    void setAge(int age)
  {
    this -> age = age;
  }

    void setOrder(int order)
  {
    this -> order = order;
  }

  void getName()
  {
    if (name.length() < 3)
    {
      cout <<" The name is too short!\n";
    } 
    else 
    {
    cout << setw(8) <<"Name: "<< setw(12) << name <<"\n";
    }
  }

  void getAge()
  {
    if (age < 7 && age > 23 )
    {
      cout<<" Not a valid age!\n";
    }
    else
    {
    cout << setw(8) << "Age: " << setw(12) <<age<<"\n";
    }
    
  }

  void getOrder()
  {
    if (order < 0)
    {
      cout<<" Not a valid order!\n";
    }
    else
    {
      cout << setw(8) << "Order: " << setw(12) << order <<"\n";
    }
  }

};
int main()
{
  string name;
  int age,order;
  student st1,st2;


  cout<<"-----------------------------------\n";
  cout<<"Enter name of student\n";
  cin>>name;
  st1.setName(name);
  cout<<"Enter age of student\n";
  cin>>age;
  st1.setAge(age);
  cout<<"Enter order of student\n";
  cin>>order;
  st1.setOrder(order);


  cout<<"\n--------- Student Info ---------\n";
  st1.getName();
  st1.getAge();
  st1.getOrder();
  cout<<"-----------------------------------\n";

  return 0;
}

/*
? The output will be:

* -----------------------------------
* Enter name of student
* Ahmed
* Enter age of student
* 20
* Enter order of student
* 2
*
* --------- Student Info ---------
*   Name:        Ahmed
*    Age:           20
*  Order:            2
* -----------------------------------
*/