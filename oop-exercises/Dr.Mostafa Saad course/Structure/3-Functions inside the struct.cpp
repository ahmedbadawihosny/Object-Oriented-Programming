#include <iostream>
using namespace std;

struct employee
{
  string name;
  int age;
  double salary;
  char gender;

void read_employee()
{
  cout<<"Enter employee 4 entries: ";
  cin>>name>>age>>salary>>gender;
}

  void print_employee()
  {
    cout << name << " has salary " << salary << "\n";
  }

  int get_age()
  {
    return age;
  }

  void set_age(int age)
  {
    this -> age = age;
  }
};

const int MAX = 10000;
employee employee_arrs[MAX];
int added = 0;

void print_employees()
{
  for (int i = 0; i < added; ++i)
  employee_arrs[i].print_employee();
}

int main()
{
  employee_arrs[added++].read_employee();
  employee_arrs[added++].read_employee();
  print_employees();
  return 0;
}