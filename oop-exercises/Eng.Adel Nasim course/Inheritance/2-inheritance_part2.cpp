/*
? in this file we will practice in inheritance 
? concept with the following contents :

* Constructor and destructor
* operator =() member
* frindes
*/

#include <iostream>
using namespace std;

//=============== first example ===============//

class mother
{
public:
  mother()     // the constructor should be public
  {
    cout<<"mother:Empty constructor\n";;
  }

  mother(int a)
  {
    cout<<"mother:parameterize constructor = "<<a<<endl;
  }
};

class daughter : public mother
{
public:
  daughter()
  {
    cout<<"daughter:Empty constructor\n";
  }

  daughter(int a)
  {
    cout<<"daughter:parameterize constructor = "<<a<<endl;
  }
};

class son1 : public mother
{
public:
  son1(int a)  : mother(a)   // to return a parameterize constructor only
  {
    cout<<"son:parameterize constructor = "<<a<<endl;
  }
};

class son2 : public mother
{
public:
  son2(int a,int b)  : mother(a)   // to return a parameterize constructor only
  {
    cout<<"son:parameterize constructor = "<<a<<" "<<b<<endl;
  }
};

//=============== second example ===============//

class name
{
private:
  string name;
protected:
  void set_name(string name)
  {
    this -> name = name;
  }

  void print_name()
  {
    cout<<"Name = "<<name<<endl;
  }
};

class id
{
private:
  int id;
protected:
  void set_id(int id)
  {
    this -> id = id;
  }

  void print_id()
  {
    cout<<"Id = "<<id<<endl;
  }
};


class student : public name, public id
{
public:
  student(string name, int id)
  {
    set_name(name);
    set_id(id);
  }

  void print()
  {
    print_name();
    print_id();
  }
};

int main()
{
//--------------- example 1 ---------------//
  //daughter sara(1);

/*
? the output will be :
* mother:Empty constructor
* daughter:parameterize constructor = 1
*/

  //daughter mariam;

/*
? the output will be :
* mother:Empty constructor
* daughter:Empty constructor
*/

  son1 ahmed(5);

/*
? the output will be :
* mother:parameterize constructor = 5
* son:parameterize constructor = 5
*/

  son2 amr(4,2);

/*
? the output will be :
* mother:parameterize constructor = 4
* son:parameterize constructor = 4 2
*/

//---------------  example 2---------------//
  student st1("Ahmed", 2200091);
  st1.print();

/*
? the output will be :
* Name = Ahmed
* Id = 2200091
*/

//--------------- example 3 ---------------//

/*
? the output will be :

*/

  return 0;
}
