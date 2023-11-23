#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  string path = "6-names.txt";
  fstream file_hundler(path.c_str());

  if (file_hundler.fail())
  {
    cout<<"Can't open the file\n";
    return 0;
  }

  string name;

  while(getline(file_hundler, name))
  {
    cout<<name<<" ";
  }

  file_hundler.close();
  return 0;
}