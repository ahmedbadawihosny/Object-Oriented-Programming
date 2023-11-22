#include <iostream>
using namespace std;

struct employee
{
  string name;
  int age;
  double salary;
  char gender;
};

const int MAX = 10000;
employee employee_arrs[MAX];
int added = 0;

void read_employee(employee & e)
{
  cout<<"Enter employee 4 entries: ";
  cin>>e.name>>e.age;
  cin>>e.salary>>e.gender;
}

void print_employee(employee & e)
{
  cout << e.name << " has salary " << e.salary << "\n";
}

void print_employees()
{
  for (int i = 0; i < added; ++i)
    print_employee(employee_arrs[i]);
}

int main()
{
  read_employee(employee_arrs[added]);
  print_employee(employee_arrs[added]);
  print_employees();
  return 0;
}