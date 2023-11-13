#include <iostream>
using namespace std;

// =========== Example1 ===========

int sum1(int x, int y)
{
  return x + y;
}

// so we will use template function for solve this problem
template <class t>
t sum2(t x, t y)
{
  return x + y;
}

template <class s1, class s2>
s1 sum3(s1 x, s2 y)
{
  return x + y;
}

// =========== Example2 ===========

template <class first, class second>
first smaller(first a, second b){
  return (a < b ? a : b);
}

int main()
{
// ----------- example1 -----------
  int x = 0 , y = 0;
  double x1 = 10.5 , y1 = 20.5;
  cout<<sum1(x1,y1)<<endl; // 35 here the output is 35 not 36 as we want becuse we write double not int.


  int x2 = 10 , y2 = 20;
  double f1 = 15.5, d1 = 1.5;
  cout<<sum2(f1,d1)<<endl;  // 17


  int x3 = 10 , y3 = 20;
  double f2 = 15.5, d2 = 1.3;
  cout<<sum3(x3,d2)<<endl;  // 11  --> s1 object is int

  int x4 = 10 , y4 = 20;
  double f3 = 15.5, d3 = 1.5;
  cout<<sum3(f3,x4)<<endl;  // 25.5  --> s1 object is double

// ----------- example2 -----------

  int a = 89;
  double b = 56.78;

  cout<<smaller(a,b)<<"\n";                // 56 becuse the return datatype is int
  cout<<smaller(b,a)<<"\n";               // 56.78 becuse the return datatype is double
  cout<<smaller<int>(a,b)<<"\n";          // 56 becuse the return datatype is int
  cout<<smaller<double>(a,b)<<"\n";       // 56.78 becuse the return datatype is double
  cout<<smaller<int,double>(a,b)<<"\n";   // 56 becuse the return datatype is int
  cout<<smaller<double,int>(b,a)<<"\n";   // 56.78 becuse the return datatype is double

  return 0;
}