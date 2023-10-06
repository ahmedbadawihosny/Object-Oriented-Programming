#include <iostream>
#include <iomanip>
using namespace std;
//=================== student class ===================//

class student
{
private:
  string name;
  int id;

public:
  student()
  {
    cout<<"Empty constructor\n";
    name = "No name";
    id = 0;
  }

  student(string name, int id)
  {
    cout<<"Paratemizer constructor\n";
    this -> name = name;
    this -> id = id;
  }

  void print()
  {
    cout<<setw(8)<<"Name: "<<setw(8)<<name<<"\n"
        <<setw(8)<<"Id: "<<setw(8)<<id  <<"\n";
  }

};


int main()
{
//=================== Examples on array of objects ===================//

  int arr1[5] = {10, 50, 40, 77, 33};

  cout<<arr1<<endl;// 0x4784bffbc0

  cout<<arr1+1<<endl;// 0x887fdffc44  // the next index location

  cout<<*arr1<<endl;// 10

  cout<<*(arr1 + 1)<<endl;// 50
  // in below we can't do like this *arr + 1 
  // because the output will be 11 not 50 and this is wrong

  for (int i = 0; i < 5; i++)
  {
    cout<<arr1<<"   "; // 0x4c867ffc00   0x4c867ffc00   0x4c867ffc00   0x4c867ffc00   0x4c867ffc00  
    cout<<*(arr1+i)<<" "; // 10 50 40 77 33 
  }
  
  int *p;
  p = arr1;
  cout<<*(p+1)<<endl; // 50
  
  for (int i = 0; i < 5; i++)
  {
    cout<<*p + i<<" "; // 10 11 12 13 14
  }


//=================== student class ===================//

  student st1("Ahmed", 2200091) ,st2("Ali", 2100355),*pointer;
  student arr2[3];
  student arr3[3] =  {st1, st2};
  pointer = arr2;

  for (int i = 0; i < 3; i++)
  {
    arr2[i].print();
  }

  /*
  ? the output will be :
  * Paratemizer constructor
  * Paratemizer constructor
  * Empty constructor
  * Empty constructor
  * Empty constructor
  * Empty constructor    // for the object arr2[3]
  *   Name:  No name
  *     Id:        0
  *   Name:  No name
  *     Id:        0
  *   Name:  No name
  *     Id:        0
  */

  for (int i = 0; i < 3; i++)
  {
    arr3[i].print();
  }


  /*
  ? the output will be :
  * Paratemizer constructor
  * Paratemizer constructor
  * Empty constructor  --|
  * Empty constructor  --|-- for the object arr2[3]
  * Empty constructor  --|
  * Empty constructor
  *   Name:    Ahmed
  *     Id:  2200091
  *   Name:      Ali
  *     Id:  2100355
  *   Name:  No name
  *     Id:        0
  */


  for (int i = 0; i < 3; i++)
  {
    (pointer+i) -> print();  // or p++ -> print();
  }

  /*
  ? the output will be :
  * Paratemizer constructor
  * Paratemizer constructor
  * Empty constructor
  * Empty constructor
  * Empty constructor
  * Empty constructor
  *   Name:  No name
  *     Id:        0
  *   Name:  No name
  *     Id:        0
  *   Name:  No name
  *     Id:        0
  */

  return 0;
}