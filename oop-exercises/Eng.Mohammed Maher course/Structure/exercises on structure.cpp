#include <iostream>
using namespace std;

  //declare a structures
  struct school{  
  string name;
  int number_of_students;
  bool is_active;
};

struct Teachers{
  string name;
  int age,id;
};

struct Students{
  string name;
  int age;
  int id;
}ob1,ob2;  // that was objects

struct patient{
  string name;
  string disease;
  int id;
  bool isGood;
  char case_sign;

  void print(){
    cout<<"\n| --------- Patient1 --------- |\n";
    cout<<"| name: "<<name<<"                    |\n";
    cout<<"| Disease: "<<disease<<"                |\n";
    cout<<"| id: "<<id<<"                       |\n";
    cout<<"| IsGood: "<<isGood<<"                    |\n";
    cout<<"| Case Sign: "<<case_sign<<"                 |\n";
    cout<<"| -----------------------------|\n";
  }
};

struct human{
  string name;
  int age;
  int salary;

  void show_data(){
    cout<<"| --------- Hello --------- |\n";
    cout<<"| I am: "<<name<<"                 |\n";
    cout<<"| I am: "<<age<<" years old "<<"       |\n";
    cout<<"| my Salary is: "<<salary<<"        |\n";
    cout<<"| --------------------------|\n";
  }

  void say_hello(){
    cout<<"Hello " + name;
  }
};

void show(human humandemo);

int main(){

// declare a structure in the main yes we can do that
// struct Teachers{
//   string name;
//   int age,id;
// };

  // cout<<sizeof(ob1);  // the size of the object is 40 ===> (string = 32) + (int = 4) + (int = 4)

  //============= school structure =============//

// define a structure variable in many ways

  // struct school sc1, sc2, sc3, sc4;  // first way

  // second way

  // struct school sc1;
  // struct school sc2;
  // struct school sc3;
  // struct school sc4;

  school sc1,sc2;  // third way

  // give values to structure members

  sc1.name = "El Nahda";  
  sc1.number_of_students = 50;
  sc1.is_active = true;
  // sc1 = {"El Nahda", 50, true};  // there is another way to give values to structure members

  sc2.name = "El Shahid";
  sc2.number_of_students = 60;
  sc2.is_active = false;

  // display structure members

  // cout<<" ______________________________\n";
  // cout<<"|       the School program     |\n";
  // cout<<"|==============================|\n";
  // cout<<"| ---------- School1 ----------|\n";
  // cout<<"|                              |\n";
  // cout<<"| Name: "<<sc1.name<<"               |\n";
  // cout<<"| Namber of students: "<<sc1.number_of_students<<"       |\n";
  // cout<<"| is it working? : "<<sc1.is_active<<"           |\n";
  // cout<<"|                              |\n";
  // cout<<"| ---------------------------- |\n";
  // cout<<"|                              |\n";
  // cout<<"| ---------- School2 ----------|\n";
  // cout<<"|                              |\n";
  // cout<<"| Name: "<<sc2.name<<"              |\n";
  // cout<<"| Namber of students: "<<sc2.number_of_students<<"       |\n";
  // cout<<"| is it working? : "<<sc2.is_active<<"           |\n";
  // cout<<"|                              |\n";
  // cout<<"|==============================|\n";

  //============= student structure =============//

  Students std1,std2;  // define a structure variable

  // give values to structure members

  std1.name = "Ahmed Badawi";
  std1.age = 20;
  std1.id = 200091;

  std2.name = "Mohamed Badawi";
  std2.age = 19;
  std2.id = 2300056;

  // display structure members

  // cout<<"|_______________________________*|\n";
  // cout<<"|      the Students program      |\n";
  // cout<<"|================================|\n";
  // cout<<"| ---------- Student1 ---------- |\n";
  // cout<<"|                                |\n";
  // cout<<"| Name: "<<std1.name<<"             |\n";
  // cout<<"| Age: "<<std1.age  <<"                        |\n";
  // cout<<"| ID: "<<std1.id  <<"                     |\n";
  // cout<<"|                                |\n";
  // cout<<"| ------------------------------ |\n";
  // cout<<"|                                |\n";
  // cout<<"| ---------- Student2 ---------- |\n";
  // cout<<"|                                |\n";
  // cout<<"| Name: "<<std2.name<<"           |\n";
  // cout<<"| Age: "<<std2.age  <<"                        |\n";
  // cout<<"| ID: "<<std2.id  <<"                    |\n";
  // cout<<"|                                |\n";
  // cout<<"| ------------------------------ |\n";
  // cout<<"|================================|\n";

  //============= the task =============//

/*
  * C++ program operates a student management system, the 
  * system has two main categories: Students and Teachers, each 
  * one of the two categories has 3 attributes: name , age , id.
  * • If we want to add the data of 2 new students and a new 
  * teacher to the system and then show their values, write the 
  * suitable code for that using only the programming paradigm 
  * of OOP that you studied.
  * • Make the code be ordered and optimized as possible 
*/

  // define a structure variable
  Students s1,s2;
  Teachers t1;

  // give values to structure members

  s1.name = "Ali";
  s1.age = 25;
  s1.id = 2990001;

  s2.name = "Logy";
  s2.age = 21;
  s2.id = 1000867;

  t1.name = "Mr.john";
  t1.age = 45;
  t1.id = 56777;

  // display structure members

  // cout<<" ________________________________";
  // cout<<"\n|        the Task program        |";
  // cout<<"\n|================================|\n";
  // cout<<"| ---------- Student1 ---------- |\n";
  // cout<<"|                                |\n";
  // cout<<"| Name: "<<s1.name<<"                      |\n";
  // cout<<"| Age: "<<s1.age<<"                        |\n";
  // cout<<"| ID : "<<s1.id<<"                   |\n";
  // cout<<"|                                |\n";
  // cout<<"| ------------------------------ |\n";
  // cout<<"|                                |\n";
  // cout<<"| ---------- Student2 ---------- |\n";
  // cout<<"|                                |\n";
  // cout<<"| Name: "<<s2.name<<"                     |\n";
  // cout<<"| Age: "<<s2.age<<"                        |\n";
  // cout<<"| ID : "<<s2.id<<"                   |\n";
  // cout<<"|                                |\n";
  // cout<<"| ------------------------------ |\n";
  // cout<<"|                                |\n";
  // cout<<"| ---------- Teacher1 ---------- |\n";
  // cout<<"|                                |\n";
  // cout<<"| Name: "<<t1.name<<"                  |\n";
  // cout<<"| Age: "<<t1.age<<"                        |\n";
  // cout<<"| ID : "<<t1.id<<"                     |\n";
  // cout<<"|                                |\n";
  // cout<<"| ------------------------------ |\n";
  // cout<<"|================================|\n";

  //============= patient structure =============//
  patient patient1;

  // cout<<"\n| -------------------------------------- |\n";
  // cout<<"| Enter the name of the patient: ";
  // cin>>patient1.name;
  // cout<<"| Enter the disease of the patient: ";
  // cin>> patient1.disease;
  // cout<<"| Enter the id of the patient: ";
  // cin>> patient1.id;
  // cout<<"| Is the patient good or not? ";
  // cin>> patient1.isGood;
  // patient1.case_sign = '-';
  // cout<<"| -------------------------------------- |\n";
  // patient1.print();

  //============= human structure =============//
  human human1;

  // cout<<"\n| ------------------------- |\n";
  // cout<<"| Enter Your Data\n";
  // cout<<"| Name: ";
  // cin>> human1.name;
  // cout<<"| Age: ";
  // cin>> human1.age;
  // cout<<"| The Salary: ";
  // cin>> human1.salary;
  // cout<<"| ------------------------- |\n";
  // human1.show_data();


  // human human_demo;
  // cout<<"\n| --------------------------------- |\n";
  // cout<<"| Enter Your Data\n";
  // cout<<"| Name: ";
  // cin>> human_demo.name;
  // cout<<"| Age: ";
  // cin>> human_demo.age;
  // cout<<"| The Salary: ";
  // cin>> human_demo.salary;
  // cout<<"| --------------------------------- |\n";

  // show(human_demo);

  return 0;
}

void show(human humandemo){

  cout<<"| ----------- The Human ----------- |\n";
  cout<<"| Name: "<<humandemo.name<<"                         |\n";
  cout<<"| Age: "<<humandemo.age<<"                           |\n";
  cout<<"| Salary: "<<humandemo.salary<<"                      |\n";
  cout<<"| Function of the object: ";
  humandemo.say_hello();
  cout<<" |\n| --------------------------------- |\n";

}