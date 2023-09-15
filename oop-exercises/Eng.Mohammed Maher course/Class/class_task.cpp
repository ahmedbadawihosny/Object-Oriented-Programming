/*
* Write a C++ program that has 2 main categories of 
* workers and managers (make them using classes), 
* each class has 3 attributes. Each class has a function 
* that sets the information entered by the user into the 
* attributes (Setter) and another function that shows his 
* information of the three attributes. Create 2 objects of 
* each class of them and give them values to be shown after.
*/

#include <iostream>
using namespace std;

class workers
{
private:

  string worker_name;
  int worker_age;
  int worker_id;
  int worker_salary;

public:

  void setter(string worker_name, int worker_age,int worker_id, int worker_salary)
  {
    this -> worker_name = worker_name;
    this -> worker_age = worker_age;
    this -> worker_id = worker_id;
    this -> worker_salary = worker_salary;
  }

  void show()
  {
    cout<<"---------------- worker info ----------------\n";
    cout<<"Name: "<<worker_name<<"\n"
    <<"age: "<<worker_age<<"\n"
    <<"salary: "<<worker_salary<<"$"<<"\n";
    cout<<"----------------------------------------------\n\n";
    
  }
};

class managers
{
private:
  string manager_name;
  int manager_age;
  int manager_id;
  int manager_salary;

public:

  void setter(string manager_name, int manager_age, int manager_id, int manager_salary)
  {
    this -> manager_name = manager_name;
    this -> manager_age = manager_age;
    this -> manager_id = manager_id;
    this -> manager_salary = manager_salary;
  }

  void show()
  {
    cout<<"---------------- manager info ----------------\n";
    cout<<"Name: "<<manager_name<<"\n"
    <<"age: "<<manager_age<<"\n"
    <<"salary: "<<manager_salary<<"$"<<"\n";
    cout<<"----------------------------------------------\n\n";
  }

};

int main()
{
  workers worker1,worker2;
  managers manager1,manager2;

  worker1.setter("Ahmed Badawi", 20, 2200091, 50000);
  worker2.setter("Ali mohammed", 25, 15622, 25000);

  manager1.setter("Mark", 55, 123, 1000);
  manager2.setter("Bill", 45, 1992, 600000);

  worker1.show();
  worker2.show();

  manager1.show();
  manager2.show();

  return 0;
}