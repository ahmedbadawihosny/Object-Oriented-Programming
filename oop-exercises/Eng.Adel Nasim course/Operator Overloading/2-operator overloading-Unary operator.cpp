#include <iostream>
using namespace std;

//============== Example1 ==============
class Unary
{
private:
  int x,y;
public:
  // Unary(){};
  Unary(int x = 0, int y = 0)
  {
    this -> x = x;
    this -> y = y;
  }

  void show()
  {
    cout<<x<<" "<<y<<endl;
  }

  Unary operator++() // prefix
  {
    x++;
    y++;
    return *this;
  }

  Unary operator++(int) // postfix
  {
    Unary ob;
    ob = *this;
    x++;
    y++;
    return ob;
  }

  Unary operator-()  // minus operator
  {
    x = -x;
    y = -y;
    return *this;
  }

  bool operator!()
  {
    return (x==0 && y==0);  // if true then return true else return false
  }

  Unary operator+=(Unary ob5)
  {
    x += ob5.x;
    y += ob5.y;
    return *this;
  }

  Unary operator-=(Unary ob7)
  {
    x -= ob7.x;
    y -= ob7.y;
    return *this;
  }
};

int main()
{

//-------------- example1 --------------
/*
  * some examples on x variable before overloaded example
  * prefix & postfix
  int x = 0 , y = 0;
  x++;
  cout<<x;  // x = 1

  ++x;
  cout<<x;  // x = 1

  cout<<x++;  // x = 0
  cout<<x;  // x = 1

  cout<<++x;  // x = 1

  x = y++;
  cout<<x;  // x = 0
  cout<<y;  // y = 1

  x = ++y;
  cout<<x;  // x = 1
*/

  Unary v(10, 20),k;
  v++;
  v.show(); // 11 21

  k = v++;
  k.show(); // 11 21
  v.show(); // 12 22

  k = ++v;
  k.show(); // 13 23

/*
  * example on x variable before overloaded example
  * variable multiplication -1
  int x = 1;
  cout<<-x<<endl;  // -1
*/

  Unary ob2(1,2);
  -ob2;
  ob2.show();  // -1 -2

/*
  * example on x variable before overloaded example
  * ! not operator
  int x = 1;
  if (x)  // x is true
    cout<<"true";
  else
    cout<<"false";

  int y = 0;
  if (y)  // y is false
    cout<<"true";
  else
    cout<<"false";

    int z = 0;

  if (!z)  // z is true
    cout<<"true";
  else
    cout<<"false";
*/

  Unary ob3(1,1);
  if (!ob3)
  cout<<"true"<<endl;
  else 
  cout<<"false"<<endl;
  // it will print false

/*
  * example on x variable before overloaded example
  * += -= operators
  int x = 1, y = 5;
  x += y;
  x -= y;
*/

  Unary ob4(2,2),ob5(3,3),ob6(4,4),ob7(1,1);
  ob4 += ob5;  // b4.operator(ob5);
  ob4.show(); // 5 5

  ob6 -= ob7;  // b4.operator(ob5);
  ob6.show(); // 3 3

  return 0;
}