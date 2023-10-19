#include <iostream>
#include <cmath>
using namespace std;

// ----------- The Functions -----------

void print_equal_line();
void print_line();
void print_wrongValue();

class shapes
{
private:
  float base, height, length, width, r;
  int side;
  int diagonal1, diagonal2;

protected:

  // ----------- Setters -----------

  void set_base(float base)
  {
    if (base < 0)
    {
      print_wrongValue();
      // we should give the base value after print wrong value
    }
    else 
    {
      this -> base = base;
    }
  }

  void set_height(float height)
  {
    if (height < 0)
    {
      print_wrongValue();
    }
    else 
    {
      this -> height = height;
    }
  }

  void set_length(float length)
  {
    if (length < 0)
    {
      print_wrongValue();
    }
    else 
    {
      this -> length = length;
    }
  }

  void set_width(float width)
  {
    if (width < 0)
    {
      print_wrongValue();
    }
    else 
    {
      this -> length = width;
    }
  }

  void set_r(float r)
  {
    if (r < 0)
    {
      print_wrongValue();
    }
    else 
    {
      this -> length = r;
    }
  }

  void set_side(int side)
  {
    if (side < 1)
    {
      print_wrongValue();
    }
    else 
    {
      this -> side = side;
    }
  }

  void set_diagonal1_diagonal2()
  {
    // do search about that
  }

  // ----------- Getters -----------
  float get_base()
  {
    return this -> base;
  }

  float get_height()
  {
    return this -> height;
  }

  float get_length()
  {
    return length;
  }

  float get_width()
  {
    return width;
  }

  float get_r()
  {
    return r;
  }

  int get_side()
  {
    return side;
  }

  // float get_diagonal1_diagonal2()
  // {

  // }

  // ----------- Functions operations -----------

  float Area();
  float Perimeter();
  float SurfaceArea();

};

/*
  1. Triangle
    - Area = 1/2 * base * height
    - Perimeter = side + side + side
*/
class Triangle : public shapes
{
public:
  
  void acsses_protected_functions(float b, float h)
  {
    set_base(b);
    set_height(h);
  }

  float Area()
  {
    return 0.5 * get_base() * get_height();
  }
};

/*
  2. Rectangle
    - Area = length * width
    - Perimeter = 2 * (length + width)
    - Surface Area = 2 * (length * width + length * height + width * height)
*/
class Rectangle : public shapes
{
public:
};

/*
  3. Square
    - Area = side^2
    - Perimeter = 4 * side
    - Surface Area = 6 * side^2
*/
class Square : public shapes
{
public:
};

/*
  4. Circle
    - Area = πr^2
    - Perimeter = 2πr
    - Surface Area = 4πr^2
*/
class Circle : public shapes
{
public:
};

/*
  5. Rhombus
    - Area = (diagonal1 * diagonal2) / 2
    - Perimeter = 4 * side
*/
class Rhombus : public shapes
{
public:
};

/*
  6. Parallelogram
    - Area = base * height
    - Perimeter = 2 * (base + side)
*/
class Parallelogram : public shapes
{
public:
};

// ---------- main function ----------
int main()
{
  Triangle tri;
  tri.acsses_protected_functions(5,5);
  cout<<tri.Area();
  return 0;
}


void print_equal_line()
{
  cout << "================================\n";
}

void print_line()
{
  cout<<"---------------------------------------------\n";
}

void print_wrongValue()
{
  print_line();
  cout << "Invalid value Please Enter A Correct Number\n";
  print_line();
}





/*
Shapes :
1- Triangle.
2- Rectangle .
3- Square.
4- Circle.
5- Rhombus.
6- Parallelogram.

  The law of shapes:

  1. Triangle
    - Area = 1/2 * base * height
    - Perimeter = side + side + side


  2. Rectangle
    - Area = length * width
    - Perimeter = 2 * (length + width)
    - Surface Area = 2 * (length * width + length * height + width * height)

  3. Square
    - Area = side^2
    - Perimeter = 4 * side
    - Surface Area = 6 * side^2

  4. Circle
    - Area = πr^2
    - Perimeter = 2πr
    - Surface Area = 4πr^2

  5. Rhombus
    - Area = (diagonal1 * diagonal2) / 2
    - Perimeter = 4 * side


  6. Parallelogram
    - Area = base * height
    - Perimeter = 2 * (base + side)

*/