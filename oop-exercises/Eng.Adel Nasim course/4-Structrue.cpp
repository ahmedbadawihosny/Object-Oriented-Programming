#include <iostream>
using namespace std;

//=================== car structre ===================//

struct car {
  string name;
  string color;
  int maxspeed;
  int model;
}ob1,ob2,ob3;  // i can put ob the name of the object before ";" 
    // that like declare the object in main function.

//=================== distance structre ===================//

struct Distance {
  int feet;
  float inches;
};

Distance add_distance(Distance d1, Distance d2){
  Distance result;
  result.feet = d1.feet + d2.feet;
  result.inches = d1.inches + d2.inches;
  return result;
}

//=================== exam structre ===================//
struct exam{
  float first;
  float second;
  float final;
  void str(){cout<<"======== struct exam =========\n";}
};

//=================== subject class ===================//
class subject{
  private:
  string name;
  exam Exam;
  public:
  subject(){
    name = "no name";
    Exam = {0,0,0};
  }

  subject(string n,float fa, float s,float fi){
    Exam.str();
    name = n;
    Exam = {fa, s, fi};
  }

  float total (){
    return Exam.first + Exam.second + Exam.final;
  }

  void print(){
    cout<<"The subject = "<<name<<"\n"
        <<"First Exam = "<<Exam.first<<"\n"
        <<"Second Exam = "<<Exam.second<<"\n"
        <<"Final Exam = "<<Exam.final<<"\n"
        <<"The Total is = "<<total()<<"\n";
        cout<<"=========================\n";
  }
};


int main(){
  car ob;
  ob.name = "Kia";
  ob.color = "black";
  ob.maxspeed = 300;
  ob.model = 2023;

  car ob = {"KKia", "black", 300, 2023};  // That is better tahn bellow

  ob1 = {"marcedes" , "red", 250, 2018};
  ob2 = {"tyota" , "white", 280, 2019};
  ob3 = {"BMW" , "blue", 350, 2020};

  if (ob1.maxspeed > ob2.maxspeed)
  cout<<"ob1 is greater than ob2\n";
  cout<<"==========================\n";

  //========================================//

  Distance x,y,z;
  cout<<"Enter feet value \n";
  cin>>x.feet>>y.feet;
  cout<<"===================\n";

  cout<<"Enter inches value \n";
  cin>>x.inches>>y.inches;
  cout<<"===================\n";

  z = add_distance(x,y);
  cout<<"z.feet value = "<<z.feet<<"\n"<<"z.inches value = "<<z.inches<<"\n";
  cout<<"====================\n";

  //========================================//

  subject bad("oop",25, 24 ,49);
  bad.print();

  return 0;
}