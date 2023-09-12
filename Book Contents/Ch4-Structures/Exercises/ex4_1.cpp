#include <iostream>
using namespace std;

struct phone
{
  int area_code; 
  int exchange;
  int number;
};

int main()
{
  phone my_number = {212 , 767, 8900};

  phone user_number;

  cout<<"--------------------------------------------\n";
  cout<<"Enter your area code, exchange, and number: \n";
  cout<<"Enter your area code : ";
  cin>>user_number.area_code;
  cout<<"Enter your exchange : ";
  cin>>user_number.exchange;
  cout<<"Enter your and number: ";
  cin>>user_number.number;
  cout<<"--------------------------------------------\n";
  cout<<"My number is "<<"("<<my_number.area_code<<") "
  <<my_number.exchange<<"-"<<my_number.number<<"\n";

  cout<<"Your number is "<<"("<<user_number.area_code<<") "
  <<user_number.exchange<<"-"<<user_number.number<<"\n";
  cout<<"--------------------------------------------\n";
  return 0;
}