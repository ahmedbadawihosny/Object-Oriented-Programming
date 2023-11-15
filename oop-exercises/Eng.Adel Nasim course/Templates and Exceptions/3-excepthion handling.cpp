#include <iostream>
using namespace std;

// =========== Exception handling with object ===========
class Cexeption
{
private:
  int array[100];
public:

  Cexeption()
  {
    for(int i = 0; i < 100; i++)
    {
      array[i] = i;
    }
  }

  int getElement(int index)
  {
    if (index >= 100)
        throw xBig();
    else if (index < 0)
        throw xSmall();
    else
        return array[index];
  }

  class xBig
  {
  public:
  xBig(){};

    void big()
    {
      cout<<"Big Element\n";
    }
  };
  class xSmall
  {
  public:
    xSmall(){};

    void small()
    {
      cout<<"Small Element\n";
    }
  };
// Yes we can create class inside class
};


int main()
{
// ---------- example1 ----------
  int hour;
  cin.exceptions(cin.failbit);  // to tell the compiler that is there exception

  try
  {
    cout<<"Enter hour: \n";
    cin>>hour;
    if(hour < 0)
      throw "Error";
    cout<<"The time is : "<<hour<<":00\n";
  }
  catch(...)
  {
    cerr<<"wrong value\n";
    // cerr --> Linked to standard error (unbuffered)
  }


// ---------- example2 ----------

  try 
  {
    int answer;
    cout<<"5 + 7 = ";
    cin>>answer;
    if(answer != 12 )
    throw "Error, wrong answer\n";

    cout<<"Good, Right answer\n";
  }
  catch(...)
  {
    cout<<"Exception: "<<"\n";
  }


// ---------- example3 ----------
  try
  {
    int arr[10] = {2,3,4,1,3,5,6,8,9};
    int index;
    cout<<"{2,3,4,1,3,5,6,8,9}\n\n";
    cout<<"Enter index that you want from the last array: \n";
    cin>>index;

    if(index < 0)
      throw "Error, negative index\n";

    if(index >= 10)
      throw index;
    
    for(int n = 0;n <= index;n++)
    {
      cout<<arr[n]<<" ";
    }
  }

  catch(int i)
  {
    cout<<"Exception: ";
    cout<<"index "<<i<<" is out of range\n";
  }
  catch(...)
  {
    cout<<"Exception: ";
  }


/*
{2,3,4,1,3,5,6,8,9}

Enter index that you want from the last array:
5
2 3 4 1 3 5
*/


// ---------- example4 ----------

  int i = 0;
  Cexeption ob;

  try
  {
    cout<<"Choise The element from 1 to 100\n";
    cin>>i;
    cout<<"The element:\t"<<ob.getElement(i)<<"\n";
  }
  catch(Cexeption::xSmall s)
  {
    //cout<<"Small Element\n";
    s.small();
  }
  catch(Cexeption::xBig b)
  {
    //cout<<"Big Element\n";
    b.big();
  }

  return 0;
}