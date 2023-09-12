#include <iostream>
using namespace std;

struct time
{
  int hours;
  int minutes;
  int seconds;
};

int main()
{
  struct time t1;
  int totalsecs;

  cout<<"---------------------------------------------\n";
  cout<<"Enter The Time in hour:minutes:second format \n";
  cout<<"Enter hours: ";
  cin>>t1.hours;
  cout<<"Enter minutes: ";
  cin>>t1.minutes;
  cout<<"Enter seconds: ";
  cin>>t1.seconds;

  totalsecs = (t1.hours*3600) + (t1.minutes*60) + (t1.seconds);

  cout<<"The total seconds = "<<totalsecs<<" seconds \n";
  cout<<"---------------------------------------------\n";

  return 0;
}