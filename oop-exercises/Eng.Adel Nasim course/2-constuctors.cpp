#include <iostream>
#include <cstring>
#define ll long long
using namespace std;
//================== traingle class ====================//
class traingle {
  private:
    int base;
    int height;
  public:
  traingle(){                //empety constructor
    cout<<"first constructor \n";
    base = 0 ;
    height = 0;
  }

  traingle(int a, int b){          //parameteraize constructor
    base = a;
    height = b;
    cout<<"second constructor \n";
  }

  void setBase_Height (int a, int b){      // the constructor is better than setBase_Height
    base = a;
    height = b;
  }

  int area(){
    return base * height * 0.5;
  }

  void print(){
    cout<<"base: "<<base<<"\n"
    <<"height: "<<height<<"\n"
    <<"area: "<<area();
  }
};

//================== stident class ====================//

class student {
private:
  string name;
  int id;

public:
  student (){                 //empety constructor
    name = "empety";
    id = 0;
    cout<<"first1 constract\n";
    cout<<"====================\n";
  }

    student (string n, int i){          //parameteraize constructor
    cout<<"parameteraize1 constract\n";
    cout<<"====================\n";
    name = n;
    id = i;;
  }

  void setName_Id(string n ,int m){
      name = n;
      id = m;
  }

  string getName() {
    return name;
  }
  int getId() {
    return id;
  }

  void print1(){
    cout<<"name= "<<name<<"\n"<<"id= "<<id<<"\n";
  }
}; // ob1 to print empty constructor


//================== Car class ====================//
class Copy {
  private:
  int a1,a2,a3,a4,a5,a6,a7,a8;

  public:
  Copy(int aa1,int aa2,int aa3,int aa4,int aa5,int aa6,int aa7,int aa8){   // its hard way😞
    a1 = aa1;
    a2 = aa2;
    a3 = aa3;
    a4 = aa4;
    a5 = aa5;
    a6 = aa6;
    a7 = aa7;
    a8 = aa8;
  }

  Copy(const Copy &ob){      // thats is easy and profissonal way
    a1 = ob.a1;
    a2 = ob.a2;
    a3 = ob.a3;
    a4 = ob.a4;
    a5 = ob.a5;
    a6 = ob.a6;
    a7 = ob.a7;
    a8 = ob.a8;
  }

  void print2(){
    cout<<a1<<" "<<a2<<" "<<a3<<" "<<
    a4<<" "<<a5<<" "<<a6<<" "<<a7<<" "<<a8;
  }
};

int main() {

  //============= Triangle class =============//
  // cout<<"====================\n";
  // traingle area;
  // area.setBase_Height(10,10);
  // area.print();
  // cout<<"====================\n";

  // cout<<"====================\n";
  // traingle area;         //empty constructor
  // area.print();
  // cout<<"====================\n";

  // traingle ob1(10,10),ob2; //parameteraize and empty constructor
  // ob1.print();
  // cout<<"====================\n";

  //============= Student class =============//
  // student ob1("ahmed",22);    // parameteraize1 constract
  // ob1.print1();
  // cout<<"====================\n";

  // student ob3,ob4("ahmed" , 2200091);  // empety constructor then parameteraize1 constract
  // ob3.print1();
  // cout<<"====================\n";
  // ob4.print1();
  // cout<<"====================\n";

  //============= Copy class =============//
  cout<<"======================================\n";
  Copy g(1,2,3,4,5,6,7,8);
  g.print2();
  cout<<"\n\n=========== first constract ===========\n\n";
  Copy h(g);
  h.print2();
  cout<<"\n\n=========== second constract ===========\n\n";
}