#include <iostream>
#include <algorithm>
using namespace std;

struct full_name
{
  string Fname,Mname,Lname;

  full_name()   //Constructor
  {
    Fname = Mname = Lname = "";
  }

  void read_name()
  {
    cout<<"Enter The First name\n";
    cin>>Fname;
    cout<<"Enter The Middle name\n";
    cin>>Mname;
    cout<<"Enter The Last name\n";
    cin>>Lname;
  }

  void print_name()
  {
    cout<<Fname<<" "<<Mname<<" "<<Lname;
  }
};

struct employee
{
  full_name emp_name;
  int age;
  double salary;
  char gender;

  void read_employee()
  {
    emp_name.read_name();
    cout<<"Enter employee 3 entries (Age,Salary,Gender): \n";
    cin>>age>>salary>>gender;
  }


  void print_employee()
  {
    emp_name.print_name();
    cout<<" his age is : "<<get_age()<<" and has salary is : "<<salary<<" and his gender is "<<gender<<"\n";
  }

  int get_age()
  {
    return age;
  }

  void set_age(int age)
  {
    this->age = age;
  }
};

int main()
{
  employee emp;
  emp.read_employee();
  emp.print_employee();
  return 0;
}