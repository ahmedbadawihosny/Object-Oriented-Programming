#include <iostream>
using namespace std;

// --------------- first example ---------------

class example
{
public:
  static string name;
};
string example::name = "Ahmed";
// --------------- second example ---------------

class example2
{
public:
  static int count;  // static variable
  example2 ()
  {
    count++;
  }

  static void print_count()  // static function
  {
    cout<<"Number of objects is : "<<count<<"\n";
  }
};
int example2::count = 0;

int main()
{
// --------------- first example ---------------
  example ob1,ob2,ob3,ob4;
  ob1.name = "Ali";
  cout<<ob1.name<<"\n";  // Ali

  ob2.name = "Mohammed";
  cout<<ob2.name<<"\n";  // Mohammed
  cout<<ob3.name<<"\n";  // Mohammed

  ob3.name = "Amr";
  cout<<ob4.name<<"\n";  // Amr

// --------------- second example ---------------
  example2 ex1,ex2,ex3,ex4;
  // cout<<example2::count;  // 4

  example2::print_count();  // Number of objects is : 4
  return 0;
}