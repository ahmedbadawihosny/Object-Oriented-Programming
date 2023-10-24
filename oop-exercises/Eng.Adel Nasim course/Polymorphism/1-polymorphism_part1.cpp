#include <iostream>
using namespace std;

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

  //virtual int area(void) 
  virtual int area(void)
  {
    return 0;
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
    return (width * height) / 2;
  }
};

int main()
{
  CRectangle rect;
  CTriangle trgl;
  CPolygon poly;
  CPolygon *p1, *p2, *p3;  // here is Polymorphism

  p1 = &rect;
  p2 = &trgl;
  p3 = &poly;

  p1 -> set_values(4,5);
  p2 -> set_values(4,5);
  p3 -> set_values(4,5);

// Before write virtual in CPolygon class
  // cout<<p1->area()<<endl; // error the function area must be in base class
  // cout<<rect.area()<<endl;  // 20
  // cout<<trgl.area()<<endl;  // 10

// After write virtual in CPolygon class
  cout<<p1->area()<<endl;  // 20
  cout<<p2->area()<<endl;  // 10
  cout<<p3->area()<<endl;  // 0

/*
? if we remove virtual from class CPolygon the output will be:
* 0
* 0
* 0
*/
  return 0;
}