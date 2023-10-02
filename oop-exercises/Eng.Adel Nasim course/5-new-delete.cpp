#include <iostream>
using namespace std;

//=================== Rectangle ===================//

class Rectangle
{
private:
  int *width, *height;

public:
  Rectangle(int, int);
  ~Rectangle();
  int area()
  {
    return (*width) * (*height);
  }
};

Rectangle::Rectangle(int w, int h)
{
  width = new int;
  height = new int;

  *width = w;
  *height = h;
}

Rectangle::~Rectangle()
{
  delete width;
  delete height;
}

int main()
{
  //=================== Examples on pointer ===================//
  int var1 = 11;
  int var2 = 22;
  cout<<"Memory location of the var1 is: "<<&var1<<"\n";  // Memory location of the var1 is:  0x14933ff9fc
  cout<<"Memory location of the var2 is:"<<&var2<<"\n";  // Memory location of the var2 is:  0x14933ff9f8

  int *ptr;
  ptr = &var1;  // should the data type of it be like var1 data type.

  *ptr = 50; // now the value is changed in ptr and var1.
  cout<<*ptr<<"\n";  // 50
  cout<<var1<<"\n";     // 50

  var1 = 100;
  cout<<*ptr<<"\n";  // 100
  cout<<var1<<"\n";     // 100

//---------------------------------

  int *p;
  p = new int;
  *p = 10;
  cout<<p<<"\n";  // 0x1f243712410
  delete p;
  
  p = new int;
  *p = 50;
  cout<<*p<<"\n";  // 50
  delete p;

//---------------------------------

  int *p1, *p2;
  p1 = new int;
  *p1 = 10;
  cout<<&p1<<"\n";                     // 0x443c5ffd60
  cout<<"Memory location "<<p1<<"\n"; // Memory location 0x1eb6a242410
  cout<<"Contains "<<*p1<<"\n";      // Contains 10
  
  p2 = new int;
  *p2 = 20;

  cout<<&p2<<"\n";                     // 0x443c5ffd58
  cout<<"Memory location "<<p2<<"\n"; // Memory location 0x1eb6a0625e0
  cout<<"Contains "<<*p2<<"\n";      // Contains 20

  delete p1;
  delete p2;

//=================== Rectangle ===================//

  Rectangle rect1(3,4) , rect2(5,6);

  cout<<"Rect1 area: "<<rect1.area()<<"\n";  // Rect1 area: 12
  cout<<"Rect2 area: "<<rect2.area()<<"\n";  // Rect2 area: 30

  return 0;
}