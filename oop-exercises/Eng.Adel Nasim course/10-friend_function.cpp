#include <iostream>
using namespace std;

// --------------- An Examples for friend function ---------------
// --------------- first example ---------------
class myclass
{
private:
  int a,b;
public:
  myclass(int a,int b)
  {
    this -> a = a;
    this -> b = b;
  }
  friend int sum(myclass ob);  // here friend function example
};

int sum(myclass ob)
{
  return ob.a + ob.b;
}

//--------------- second example ---------------
class Rectangle
{
private:
  int width, height;
  friend Rectangle duplicate(Rectangle R);  // here friend function example

public:
  void set_values(int ,int);
  int area()
  {
    return (width * height);
  }
};

void Rectangle::set_values(int width, int height)
{
  this -> width = width;
  this -> height = height;
}

Rectangle duplicate(Rectangle R)
{
  Rectangle T;
  T.width = R.width * 2;
  T.height = R.height * 2;
  return T;
}
//--------------- third example ---------------
class triangle;
class rectangle
{
private:
  int width, height;
public:
  void set_values(int width, int height)
  {
    this -> width = width;
    this -> height = height;
  }
  friend int sum(rectangle R,triangle T);
};

class triangle
{
private:
  int width, height;
public:
  triangle (int width, int height)
  {
    this -> width = width;
    this -> height = height;
  }
  friend int sum(rectangle R,triangle T);
};

int sum(rectangle R,triangle T)
{
  return R.width + T.width;
}

// --------------- An Example for friend class ---------------
class Csquare;
class Crectangle
{
private:
  int width, height;
public:
  int area()
  {
    return (width * height);
  }
  void convert(Csquare);
};

class Csquare
{
private:
  int side;
public:
  void set_side(int side)
  {
    this -> side = side;
  }
  friend class Crectangle;
};

void Crectangle::convert(Csquare ob1)
{
  width = ob1.side;
  height = ob1.side;
}

int main()
{
//--------------- first example for friend function ---------------
  myclass ob1(10,20);
  cout<<sum(ob1);
  
  /*
  ? the output will be
  * 30
  */
//--------------- second example for friend function ---------------
  Rectangle rect,rectb;
  rect.set_values(2,3);
  cout<<"The area befor duplicate = "<< rect.area()<<endl;
  rectb = duplicate(rect);
  cout<<"The area after duplicate = "<< rectb.area()<<endl;

/*
  * the output is 
  * The area befor duplicate = 6
  * The area after duplicate = 24
*/

//--------------- third example for friend function ---------------
  rectangle r;
  r.set_values(2,3);
  triangle t(5,10);
  cout<<sum(r,t)<<endl;

/*
  * the output is : 7
*/

// --------------- An Example for friend class ---------------
  Csquare sqr;
  Crectangle rectangle;
  sqr.set_side(4);
  rectangle.convert(sqr);
  cout<<rectangle.area()<<endl;

/*
  * the output is : 16
*/
  return 0;
}