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

void read_employee()
{
  cout<<"Enter employee 4 entries: ";
  cin>>employee_arrs[added].name>>employee_arrs[added].age;
  cin>>employee_arrs[added].salary>>employee_arrs[added].gender;
  added++;
}

void print_employee()
{
  for(int i = 0;i < added; ++i)
  {
    employee e = employee_arrs[i];
    cout<<e.name<<" "<<e.age<<" "<<e.salary<<" "<<e.gender<<endl;
  }
}

int main()
{
  employee first = {"Ahmed" , 20 , 25000, 'M'};
  employee_arrs[added] = first;

  employee_arrs[added].name = "Ahmed";
  employee_arrs[added].age = 20;
  employee_arrs[added].salary = 25000;
  employee_arrs[added].gender = 'M';
  added++;

  read_employee();
  print_employee();
  return 0;
}