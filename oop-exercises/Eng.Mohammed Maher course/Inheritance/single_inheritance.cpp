#include <iostream>
using namespace std;

void printLine();
class shape
{
protected:
  string name;
  int number_of_lines;
  int length1, length2;

  void showInfo()
  {
    cout<<"Name: "<<name<<"\n"
        <<"Number of lines: "<<number_of_lines<<"\n"
        <<"Length 1: "<<length1<<"\n"
        <<"Length 2: "<<length2<<"\n";
    
  }
};

class Rectangle : public shape
{
public:

  void getData()
  {
    printLine();
    cout<<"Enter The name of the shape :\n";
    cin>>name;
    cout<<"Enter the number of lines : \n";
    cin>>number_of_lines;
    cout<<"Enter the length 1 : \n";
    cin>>length1;
    cout<<"Enter the length 2 : \n";
    cin>>length2;
    printLine();
  }


  void area()
  {
    printLine();
    cout<<"The Area of "<<name<<" is "<<length1 * length2<<"\n";
    printLine();
  }

  void access_function()
  {
    showInfo();
  }
};

int main()
{
  Rectangle r;
  r.getData();
  r.access_function();
  r.area();

/*
? The output will be:
-------------------------------------------------
* Enter The name of the shape :
* Rectangle
* Enter the number of lines : 
* 4
* Enter the length 1 : 
* 10
* Enter the length 2 : 
* 20
* -------------------------------------------------
* Name: Rectangle
* Number of lines: 4
* Length 1: 10
* Length 2: 20
* -------------------------------------------------
* The Area of Rectangle is 200
* -------------------------------------------------
*/
  return 0;
}

void printLine()
{
    cout<<"-------------------------------------------------\n";
}