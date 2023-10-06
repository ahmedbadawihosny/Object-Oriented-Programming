#include <iostream>
using namespace std;

class student
{
private:
  int id;

public:

  void address()
  {
    cout<<this;
  }

  void set_id(int id)
  {
    this -> id = id;  // Here we use ( this ) in the class
  }

  void print_id()
  {
    cout<<"ID is : "<<id;
  }
};

int main()
{
  student ob1,ob2,ob3,st;

  cout<<"The address of ob1: ";
  ob2.address(); 
  // or we can do that
  // cout<<"\n ob1 address is : "<<&ob1;  will be the same

  cout<<"\nThe address of ob2: ";
  ob2.address();

  cout<<"\nThe address of ob3: ";
  ob3.address();

  st.set_id(10);
  st.print_id();

  return 0;
}