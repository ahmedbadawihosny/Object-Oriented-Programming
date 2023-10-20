#include <iostream>
using namespace std;

void printLine();
class human
{
public:
  string name;
  int age;

  void welcome_human()
  {
    cout<<"Welcome From Humman Class\n";
  }
};

class worker
{
public:
  int exp;
  int salary;

  void welcome_worker()
  {
    cout<<"Welcome From Worker Class\n";
  }
};

class student : public human , private worker
{
public:
  void set_exp(int exp)
  {
    this -> exp = exp;
  }

  void set_salary(int salary)
  {
    this -> salary = salary;
  }

  int get_exp()
  {
    return exp;
  }

  int get_salary()
  {
    return salary;
  }

  void get_private_function()
  {
    welcome_worker();
  }
};

int main()
{

  student s;
  s.name = "Ahmed";
  s.age = 20;
  s.set_exp(10);
  s.set_salary(10000);

  printLine();

  s.welcome_human();
  s.get_private_function();

  printLine();

  cout<<"Name: "<<s.name<<endl;
  cout<<"Age: "<<s.age<<endl;
  cout<<"Exp: "<<s.get_exp()<<endl;
  cout<<"Salary: "<<s.get_salary()<<endl;

  printLine();

/*
? The output will be:
* ---------------------------------------------
* Welcome From Humman Class
* Welcome From Worker Class
* ---------------------------------------------
* Name: Ahmed
* Age: 20
* Exp: 10
* Salary: 10000
* ---------------------------------------------
*/
  return 0;
}

void printLine()
{
  cout<<"---------------------------------------------\n";
}
