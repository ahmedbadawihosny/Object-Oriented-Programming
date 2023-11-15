#include <iostream>
#include <fstream>
using namespace std;

int main()
{
// ----------- example1 -----------
  ofstream ob1;
  ob1.open("ob1.txt");
  ob1<<"hello world\n";
  ob1.close();

  ofstream ob2("ob2.txt");
  ob2<<"I Test this file\n";
  ob2.close();

  ofstream ob3("E:/ob3.txt");
  ob3<<"I Test this file and put it i E hard disk\n";
  ob3.close();
// ----------- example2 -----------

  ofstream test("test.txt");
  if(test.is_open())
    cout<<"It's open\n";
  else
    cout<<"It's close\n";
  test.close();

// ----------- example3 -----------

  ofstream statusFile("sfile.txt");
  cout<<"Enter the student status \n";
  cout<<"Press ctrl+z to exit\n";
  string name;
  int id;
  while(cin>>name>>id)
  {
    statusFile<<name<<" "<<id<<"\n";
  }

// ----------- example4 -----------

  int arr1[10];
  int j = 0;
  for (int i = 0; i < 10; i++)
  {
    j = i * 10;
    arr1[i] = j;
  }

  for (int i = 0; i < 10; i++)
  {
    cout<<arr1[i]<<"\n";
  }

  ofstream fout("fout.txt", ios::binary);
  //fout.write(reinterpret_cast<char*>(arr1), 10 * sizeof(int));
  fout.write((char*)&arr1, sizeof arr1);
  fout.close();

// ----------- example5 -----------
  int arr1[10];
  int i = 0;
  ifstream fin("fout.txt", ios::binary);
  fin.read((char*)&arr1, 10 * sizeof(int));
  for (i = 0; i < 20; i++)
  {
    arr1[i] = i * 10;
  }

  for (i = 0; i < 20; i++)
  {
    cout<<arr1[i]<<"\n";
  }

  fin.close();
// ----------- example6 -----------

  return 0;
}