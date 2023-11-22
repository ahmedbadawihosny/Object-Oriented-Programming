#include<iostream>
using namespace std;

struct full_name
{
  string Fname,Mname,Lname;

  full_name()   //Constructor
  {
    Fname = Mname = Lname = "";
  }

  full_name(string Fname = "", string Mname = "",string Lname = "")
  {
    this -> Fname = Fname;
    this -> Mname = Mname;
    this -> Lname = Lname;
  }

  void printFullName()
  {
    cout<<Fname<<" "<<Mname<<" "<<Lname<<endl;
  }
};


int main()
{
  full_name first_name("Ahmed");
  cout<<first_name.Fname<<"\n";

  full_name his_name = full_name("Ahmed", "Badawi");
  cout<<his_name.Mname<<"\n";

  full_name fullName = full_name("Ahmed","Badawi","Hosny");
  fullName.printFullName();

  return 0;
}