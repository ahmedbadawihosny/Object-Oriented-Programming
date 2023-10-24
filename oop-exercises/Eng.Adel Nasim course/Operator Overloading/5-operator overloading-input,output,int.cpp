#include <iostream>
using namespace std;

// ========== Example1 ==========
class Distance
{
private:
  int feet , inches;
public:
  Distance()
  {
    feet = 0;
    inches = 0;
  }

  Distance(int feet, int inches)
  {
    this -> feet = feet;
    this -> inches = inches;
  }

  friend istream& operator >> (istream& input, Distance& D);
  friend ostream& operator << (ostream& output, Distance& D);
};

istream& operator >> (istream& input, Distance& D)
{
  input>>D.feet>>D.inches;
  return input;
}

ostream& operator << (ostream& output, Distance& D)
{
  output<<"feet = "<<D.feet<<" "<<"inches = "<<D.inches<<endl;
  return output;
}

// ========== Example2 ==========
class number
{
private:
  int num;
public:
  number()
  {
    num = 0;
  }

  number(int num)
  {
    this -> num = num;
  }

  number(const number& ob)
  {
    num = ob.num;
  }

  int get_num()
  {
    return num;
  }
  operator int()
  {
    return int(num);
  }
};

// ========== Example3 ==========

class Array
{
private:
  int arr[3];
public:
  Array()
  {
    for (int i = 0; i < 3; i++)
    {
      arr[i] = i+2;
    }
  }

  int& operator[](int index)
  {
    return arr[index];
  }
};

int main()
{
// -------- example1 --------
  Distance d1(11,10),d2(5,11),d3;
  cin>>d3;   // 10 20
  cout<<d3;  // 10 20

// -------- example2 --------
  number n;

  int x = 10;
  n = x;
  cout<<n.get_num();  // 10

  number n2(20);

  x = n2;
  cout<<x;  // 20

// -------- example3 --------
  Array ob;
  cout<<ob[2]<<endl;  // 4

  ob[2] = 20;
  cout<<ob[2]<<endl;  // 20
  return 0;
}