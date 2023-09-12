#include <iostream>
using namespace std;

struct date
{
  int year;
  int month;
  int day;
};

int main()
{
  struct date user_data;
  char s;   // To Enter the date in the format like 12/31/2001, like the '/'

  cout<<"-------------------------------------------- \n";
  cout<<"Enter The date in the format month/day/year\n";
  cout<<"Enter The date in month : ";
  cin>>user_data.month;
  cout<<"Enter The date in day : ";
  cin>>user_data.day;
  cout<<"Enter The date in year : ";
  cin>>user_data.year;
  
  cout<<"The Date is : "<<user_data.month<<"/"<<user_data.day<<"/"<<user_data.year<<"\n";
  cout<<"-------------------------------------------- \n";
  return 0;
}