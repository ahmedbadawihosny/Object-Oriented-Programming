#include <iostream>
using namespace std;

class binary
{
private:
  int x,y;
public:

  binary(int x = 0,int y = 0)
  {
    this -> x = x;
    this -> y = y;
  }

  binary operator+(binary ob2)
  {
    binary ob3;
    ob3.x = x + ob2.x;
    ob3.y = y + ob2.y;
    return ob3;
  }

  binary operator+(int n)
  {
    binary ob3;
    ob3.x = x + n;
    ob3.y = y + n;
    return ob3;
  }

  friend binary operator+(int n, binary ob1);

  void print()
  {
    cout<<x<<','<<y<<endl;
  }
};

binary operator+(int n, binary ob1)
{
  binary ob3;
  ob3.x = ob1.x + n;
  ob3.y = ob1.y + n;
  return ob3;
}

int main()
{
  binary ob1(3,1),ob2(1,2),ob3;

  ob3 = ob1 + ob2;  // c3 = c1.operator+(c2);
  ob3.print();  // 4,3

  ob3 = ob1 + 10;  // c3 = c1.operator+(10);
  ob3.print();  // 13,11

  ob3 = 10 + ob1;  // c3 = operator+(c1,10);
  ob3.print(); // 13,11

  return 0;
}