#include <iostream>
#include <sstream>
using namespace std;

int main()
{
  string str = "Ahmed Badawi 20 years old";
  istringstream iss(str);

  string fname;
  string lname;
  int age;
  iss >> fname >> lname >> age;
  cout << age;

  return 0;
}