#include <iostream>
using namespace std;

//--------------- Static explain function ---------------
void f()
{
  static int x=0;
  x++;
  cout<<x;
}

// --------------- Static Class ---------------
// Define How many objects create

class student
{
private:
  static int count;
  string name;
  int first,second,final,total,id;

public:
  static void print()
  {
    cout<<"Numbers of students constructed : "<<count<<endl;
  }

  student()
  {
    name = "No Name";
    id =0;
    first = second = final = total = 0;
    count++;
    print();
  }
};
// Give count initial value
int student::count = 0;

int  main()
{
//--------------- Static explain ---------------//
  // f();
  // f();
  // f();
  // f();

  /*
  ? the output will be 
  * 1
  * 2
  * 3
  * 4
  */


// --------------- Static Class ---------------//

  student::print(); // we can do that

  cout<<"\nConstruct 2 objects\n";
  student s1,s2;
  cout<<"\nConstruct 3 objects\n";
  student st[3]; // ==> st[0] , st[1] , st[2]
  //                       ^       ^      ^
  //                      3       4       5

  /*
  ? The Output will be
  * Numbers of students constructed : 0

  * Construct 2 objects
  * Numbers of students constructed : 1
  * Numbers of students constructed : 2

  * Construct 3 objects
  * Numbers of students constructed : 3
  * Numbers of students constructed : 4
  * Numbers of students constructed : 5
  */

  return 0;
}