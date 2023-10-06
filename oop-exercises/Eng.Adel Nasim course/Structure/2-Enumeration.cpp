#include <iostream>
#define ll long long
using namespace std;

// indexs   0  1   2   3   4   5    6
// enum days {sat=1,sun,mon,tue,wed,thur,fri};
// const int sat = 0;
// const int sun = 1;
// const int mon = 2;
// const int tue = 3;
// const int wed = 4;
// const int thur = 5;
// const int fri = 6;

string da[7] = {"sat","sun","mon","tue","wed","thur","fri"};
enum Days {sat=1,sun,mon,tue,wed,thur,fri};

class week{
  Days d[7];
public: 
  void setday(Days w[]){
    for(int i=0;i<7;i++)
      d[i] = w[i];
    
  }
  
  void print(){
    for (int i=0;i<7;i++)
    cout<<"The number of day "<<da[i]<<" = "<<d[i]<<"\n";
  }

};

int main(){
  //             enumeration explanation
  // string d[7] = {"str","sun","mon","tue","wed","thur","fri"};
  // days m[7] = {str,sun,mon,tue,wed,thur,fri};
  // for(int i=0;i<7;i++){
  //   cout<<m[i]<<" - "<<d[i]<<"\n";
  // }

/*
    ? the output ?
* 1
* 2
* 3
* 4
* 5
* 6
* 7
*/

  //             enumeration class

  Days d[7] = {sat,sun,mon,tue,wed,thur,fri};
  week g;
  g.setday(d);
  g.print();

/*
      ? the output ?

* The number of days sat = 1
* The number of days sun = 2
* The number of days mon = 3
* The number of days tue = 4
* The number of days wed = 5
* The number of days thur = 6
* The number of days fri = 7
*/
}