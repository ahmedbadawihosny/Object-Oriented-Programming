#include <iostream>
using namespace std;

//============== Example1 ==============
class traingle
{
private:
  float width, height;

public:
  traingle(float width = 0, float height = 0)
  {
    this -> width = width;
    this -> height = height;
  }

  void get_traingle_data()
  {
    cout<<"Enter The width: \n";
    cin>>width;
    cout<<"Enter The height: \n";
    cin>>height;
  }

  void show_traingle_data()
  {
    cout<<"The width and height = ("<<width<<","<<height<<")\n";
  }

  void add_function(traingle c1, traingle c2)
  {
    width = c1.width + c2.width;
    height = c1.height + c2.height;
  }

  traingle add_object(traingle c2)
  {
    traingle c3;
    c3.width = width + c2.width;     // here width is for c1;
    c3.height = height + c2.height;  // here height is for c1;
    return c3;
  }
};

//============== Example2 ==============

class rectangle
{
private:
  float length , width;
public:
  rectangle(float length = 0, float width = 0)
  {
    this -> length = length;
    this -> width = width;
  }

  void get_rectangle_data()
  {
    cout<<"Enter The length: \n";
    cin>>length;
    cout<<"Enter The width: \n";
    cin>>width;
  }

  void show_rectangle_data()
  {
    cout<<"The length and width = ("<<length<<","<<width<<")\n";
  }

  rectangle operator+(rectangle R2)
  {
    rectangle R3;
    R3.length = length + R2.length;
    R3.width = width + R2.width;
    return R3;
  }

    rectangle operator-(rectangle R2)
  {
    rectangle R3;
    R3.length = length - R2.length;
    R3.width = width - R2.width;
    return R3;
  }

    rectangle operator*(rectangle R2)
  {
    rectangle R3;
    R3.length = length * R2.length;
    R3.width = width * R2.width;
    return R3;
  }

    rectangle operator/(rectangle R2)
  {
    rectangle R3;
    R3.length = length / R2.length;
    R3.width = width / R2.width;
    return R3;
  }
};


int main()
{
//-------------- Example1 --------------

  // int x,y,z;
  // z = x + y;

  traingle c1,c2(3.5, 1.5),c3;
  //c1.get_traingle_data();

  //c3.add_function(c1, c2);  // print the same outbut

  //c3 = c1.add_object(c2);  // print the same outbut

  //c3.show_traingle_data();

/*
? The output will be:
* Enter The width: 
* 3.5
* Enter The height: 
* 2.5
* The width and height = (7,4)

*/

//-------------- Example2 --------------

  rectangle R1,R2(10, 15),R3;

  R1.get_rectangle_data();

  // Binary Operator Overloading

  R3 = R1 + R2;               // R1.operator+(R2);
  R3.show_rectangle_data();
  cout<<"The add operator\n";

  R3 = R1 - R2;               // R1.operator-(R2);
  R3.show_rectangle_data();
  cout<<"The diff operator\n";

  R3 = R1 * R2;               // R1.operator*(R2);
  R3.show_rectangle_data();
  cout<<"The multi operator\n";

  R3 = R1 / R2;               // R1.operator/(R2);
  R3.show_rectangle_data();
  cout<<"The div operator\n";


/*
? The output will be:
* Enter The length: 
* 10
* Enter The width:
* 3
* The length and width = (20,18)
* The length and width = (0,-12)
* The length and width = (100,45)
* The length and width = (1,0.2)
*/

  return 0;
}