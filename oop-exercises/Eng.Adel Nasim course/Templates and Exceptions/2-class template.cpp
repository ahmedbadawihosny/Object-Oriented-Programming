#include <iostream>
using namespace std;

// =========== class template ===========
template <class T>
class number
{
private:
  T first,second;
public:
  number(T first , T second)
  {
    this -> first = first;
    this -> second = second;
  }

  T max();
};

template <class T>
T number<T>::max()
{
  return (first > second ? first : second);
}

// =========== template specialization ===========
template <class C>
class A_char
{
public:
  A_char(C x)
  {
    cout<<x<<" is not character\n";
  }
};

template<>
class A_char<char>
{
public:
  A_char(char x)
  {
    cout<<x<<" is character\n";
  }
};

int main()
{
// ----------- class template example -----------
  number <int> ob1(10,20);
  cout<<ob1.max()<<"\n";  // 20
  number <double>ob2(10.5,20.5);
  cout<<ob2.max()<<"\n"; // 20.5


// ----------- template specialization example -----------
  A_char<int>obj1(7);          // 7 is not character
  A_char<double>obj2(5.199);  // 5.199 is not character
  A_char<char>obj3('A');     // A is character

  return 0;
}