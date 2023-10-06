#include <iostream>
#include <cstring>
#define ll long long
using namespace std;

class car {
private:
    string name;
    string color;
    int maxspeed;
    int model;
public:
    void setName(string n){
      name = n;
    }
    void setColor(string c){
      color = c;
    }
    void setMaxspeed(int max){
      maxspeed = max;
    }
    void setModel(int m){
      model =m;
    }

    string getName(){
      return name;
    }
    string getColor(){
      return color;
    }
    int getMaxSpeed(){
      return maxspeed;
    }
    int getModel(){
      return model;
    }

    void print(){
      cout<<"name= "<<name<<"\n"
      <<"color= "<<color<<"\n"
      <<"maxspeed= "<<maxspeed<<"\n"
      <<"model= "<<model<<"\n";
    }
};

//=================== triangle class ===================//

class triangle {
private:
    int base,height;

public:
    void setBase(int x, int y){
      base = x;
      height = y;
    }
    int getArea(){
      return base * height * 0.5;
    }
    void print(){
      cout<<"Base= "<<base<<"\n"
      <<"height= "<<height<<"\n"
      <<"area= "<<getArea()<<"\n";
    }
};

//================== stident class ====================//

class student {
private:
  string name;
  string specilast;
  string id;
  int num;

public:
  void setName(string n){
      name = n;
  }
    void setSpecilast(string n){
      specilast = n;
  }
    void setId(string n){
      id = n;
  }
    void setNum(int m){
      num = m;
  }

  string getName() {
    return name;
  }
  string getSpecilast() {
    return specilast;
  }
  string getId() {
    return id;
  }
  int getNum() {
    return num;
  }
  void print(){
    cout<<"name= "<<name<<"\n"
    <<"specilast= "<<specilast<<"\n"
    <<"id= "<<id<<"\n"
    <<"num= "<<num<<"\n";
  }
};

int main() {
  car x;
  x.setName("Kia");
  x.setColor("red");
  x.setMaxspeed(300);
  x.setModel(2017);
  x.print();

  cout<<"==========================\n";

  triangle area;
  area.setBase(10, 5);
  cout<<"area= "<<area.getArea()<<"\n";
  cout<<"==========================\n";
  area.print();

  cout<<"==========================\n";

  student ab;
  ab.setName("Ahmed Badawi");
  ab.setId("2200091");
  ab.setSpecilast("AI");
  ab.setNum(1);
  cout<<"==========================\n";
  ab.print();

  cout<<"==========================\n";
}
