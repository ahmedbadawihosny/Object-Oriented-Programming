#include <iostream>
using namespace std;

// ========= Example1 =========
// CPolygon class is abstract class not base class
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

  virtual int area(void) = 0;  // pure virtual function

  /* virtual int area(void)
  {
    return 0;
  }
  */
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

// ========= Example2 =========
// abstract class
class polygon
{
protected:
  int width, height;
public:
  void set_vaues(int width, int height)
  {
    this -> width = width;
    this -> height = height;
  }
  virtual int area(void) = 0;
  void printArea(void)
  {
    cout<<this->area()<<endl;
  }
};

class rectangle : public polygon
{
public:
  int area()
  {
    return (width * height);
  }
};

class triangle : public polygon
{
public:
  int area()
  {
    return (width * height) / 2;
  }
};

int main()
{
// -------- example1 --------
  CRectangle rect;
  CTriangle trgl;
  // CPolygon poly;  // incorrect becuse the CPolygon class is abstract class
  CPolygon *poly1 = &rect;  // correct
  CPolygon *poly2 = &trgl;  // correct

  poly1 -> set_values(4,5);
  poly2 -> set_values(4,5);

  cout<<poly1->area()<<endl;  // 20
  cout<<poly2->area()<<endl;  // 10

// -------- example2 --------
  rectangle rectangle;
  triangle triangle;
  polygon *p1 = &rectangle;  // early binding
  polygon *p2 = &triangle;
  p1->set_vaues(4,5);
  p2->set_vaues(4,5);

  p1->printArea(); // 20
  p2->printArea(); // 10

  polygon *p[2] = {&rectangle, &triangle};

  for(int i = 0; i < 2; i++)  // late binding
  {
    p[i]->area();
    p[i]->printArea();
  }
/*
? The output will be:
  * 20
  * 10
*/

  return 0;
}