#include <iostream>
#include <sstream>
using namespace std;

int main()
{
  ostringstream oss;

  oss << "Ahmed Badawi ";
  oss << 20;
  oss << " years old\n";

  cout << oss.str();

  return 0;
}