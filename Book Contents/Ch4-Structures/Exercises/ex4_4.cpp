#include <iostream>
using namespace std;

struct employee
{
  int employee_number;
  float employee_compensation;
};

int main()
{
  employee employee1,employee2,employee3;
  
  cout<<"---------------------------------------------------\n";
  cout<<"Enter data for three employees (number,compensation):\n";
  cout<<"Enter data for the first employee : ";
  cin>>employee1.employee_number>>employee1.employee_compensation;
  cout<<"Enter data for the second employee : ";
  cin>>employee2.employee_number>>employee2.employee_compensation;
  cout<<"Enter data for the third employee : ";
  cin>>employee3.employee_number>>employee3.employee_compensation;

  cout<<"---------------------------------------------------\n";
  cout<<"The first employee data is: \n"
  <<"id: "<<employee1.employee_number<<"\n"
  <<"compensation: "<<employee1.employee_compensation<<"$\n";

  cout<<"---------------------------------------------------\n";
  cout<<"The second employee data is: \n"
  <<"id: "<<employee2.employee_number<<"\n"
  <<"compensation: "<<employee2.employee_compensation<<"$\n";

  cout<<"---------------------------------------------------\n";
  cout<<"The third employee data is: \n"
  <<"id: "<<employee3.employee_number<<"\n"
  <<"compensation: "<<employee3.employee_compensation<<"$\n";
  cout<<"---------------------------------------------------\n";

}