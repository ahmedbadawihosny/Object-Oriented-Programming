#include <iostream>
using namespace std;

class Time
{
private:
  int hours, minutes, seconds;
public:

  Time (int hours, int minutes, int seconds)
  {
    this -> hours = hours;
    this -> minutes = minutes;
    this -> seconds = seconds;
  }

  void print () const      // constant function
  {
    cout<<"The Time is ==> "<<hours<<" : "<<minutes<<" : "<<seconds<<"\n";
  }
};

int main()
{
  // --------------- constant Explain ---------------
  // const float pi = 3.14;
  // The Main of constant is that we declare variable 
  // and give it value we and can't give it another value like the next example: 
  // pi = pi + 5; // that's was wrong


// --------------- constant class ---------------

  const Time clock(12,45,55);  // constant object
  // Time clock(12,45,55); // if we define object without const it will be true.
  clock.print();

  return 0;
}