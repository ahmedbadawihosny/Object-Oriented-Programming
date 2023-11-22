#include <iostream>
#include <algorithm>
using namespace std;

struct employee {
  string name;
  int age;
  double salary;
  char gender;

  void read_employee() {
    cout << "Enter employee 4 entries: ";
    cin >> name >> age;
    cin >> salary >> gender;
  }

  void print_employee() {
    cout << name << " has salary " << salary << "\n";
  }

  int get_age() {
    return age;
  }
  void set_age(int new_age) {
    age = new_age;
  }
};

const int MAX = 10000;

employee emplyees_arrs[MAX];
int added = 0;


// Compare Methods
bool compare_name(employee &a , employee &b)
{
  return a.name < b.name;
}

bool compare_salary(employee &a , employee &b)
{
  return a.salary > b.salary;
}

bool compare_name_salary(employee &a , employee &b)
{
  if(a.name != b.name)
  {
    return a.name < b.name;
  }
  return a.salary < b.salary;
}

void print_employees() {
  cout << "---------------------\n";
  for (int i = 0; i < added; ++i)
  {
    emplyees_arrs[i].print_employee();
  }
}

int main()
{
  emplyees_arrs[added++].read_employee();
  emplyees_arrs[added++].read_employee();
  emplyees_arrs[added++].read_employee();

  sort(emplyees_arrs, emplyees_arrs + added, compare_name);
  print_employees();

  sort(emplyees_arrs, emplyees_arrs + added, compare_salary);
  print_employees();

  sort(emplyees_arrs, emplyees_arrs + added, compare_name_salary);
  print_employees();
  
  return 0;
}