#include <iostream>
#include <fstream>  // for ifstream and ofstream
using namespace std;

int main()
{
  string path = "5-names.txt";

  fstream file_handler(path.c_str() , ios::in | ios::out | ios::app);
  
  if (file_handler.fail())
  {
    cout<<"Can't open the file\n";
    return 0;
  }

  file_handler.clear();

  string fname,lname;
  file_handler >> fname >> lname;
  cout<<fname<<" "<<lname<<endl;

  file_handler << "\nHosny\n";
  file_handler.close();
  return 0;
}