/*
?????? - Inheritance - ??????

* Inheritance is reyouzabilate.
* base class --> derived classe.
* super class --> sub class.
* member public can access from any where.
* member private can access from the same class only.
* member protected can access from the derived classe and at the same class.
* 
*/

#include <iostream>
using namespace std;

//==================== first example ====================//

class A 
{
private:
  int i;
protected:
  int j;
public:
  int k;
};

class B : public A     //  inherited public member
{
private:
  int x;

public:
  int y;

  // int get_i()
  // {
  //    return i;  // cannot access private member declaed in class 'A'
  // }

  int get_j()
  {
    return j;  // can access protected member declaed in class 'A'
  }

  int get_k()
  {
    return k; // can access public member declaed in class 'A'
  }
};

//==================== second example ====================//

class C
{
private:
  int s;
protected:
  int f;
public:
  int g;
};


class D : private C
{
private:
  int z;

public:
  int v;

  int get_j()
  {
    return f;  // can access protected member declaed in class 'A'
  }
};

//==================== third example ====================//

class CPolygon
{
protected:
  int width, height;

public:
  void set_values(int width, int height)
  {
    this -> width = width;
    this -> height = height;
  }
};

class CRectangle : public CPolygon
{
public:

  int area()
  {
    return (width * height);
  }
};


class CTriangle : public CPolygon
{
public:

  int area()
  {
    return (width * height)/2;
  }
};


//==================== fourth example ====================//

class super_class
{
private:
  int i;
protected:
  int h;
public:
  int j,k;

  void set_i(int i)
  {
    this -> i = i;
  }

  int get_i()
  {
    return i;
  }
};


class sub_class : private super_class
{
public:
  super_class::j;       // make j public again
  super_class::set_i;  // make set_i public again
  super_class::get_i; // make get_i public again
  // super_class::i;    // illegal , you cannot elevate access
  super_class::h;
  int a;
};

int main()
{
//-------------- example 1 --------------//

  B ob1;
  // ob1.i = 5;  // cannot access private member declaed in class 'A'
  // ob1.j = 6;  // cannot access protected member declaed in class 'A'
  ob1.k = 7;
  // ob1.x = 8;  // cannot access private member declaed in class 'A'
  ob1.y = 9;

//-------------- example 2 --------------//

  D ob2;
  // ob2.k = 7;  // cannot access public member declaed in class 'A'
  ob2.v = 9;

//-------------- example 3 --------------//
  CRectangle rect;
  CTriangle trgl;

  rect.set_values(4, 5);
  trgl.set_values(4, 5);

  cout<<"The area of Rectangle is: "<<rect.area()<<"\n";
  cout<<"The area of Triangle is: "<<trgl.area()<<"\n";

/*
? the output will be :

* The area of Rectangle is: 20
* The area of Triangle is: 10
*/

//-------------- example 4 --------------//

  sub_class ob3;
  //ob3.i = 10;
  ob3.j = 20;    // legal j is made public
  //ob3.k =30;  // illegal k is private
  ob3.a = 40;
  ob3.h = 50;
  ob3.set_i(10);
  cout<<ob3.get_i()<<"\n";
  cout<<ob3.j<<"\n"<<ob3.a<<"\n"<<ob3.h;

/*
? the output will be :
* 10
* 20
* 40
*/

//----------------------------//
  return 0;
}
