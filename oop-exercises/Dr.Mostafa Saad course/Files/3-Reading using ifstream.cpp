#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  ifstream fin("3-readingFile.txt");
  
  if (fin.fail())
  {
    cout<<"Can't open the file\n";
    return 0;
  }

  int x,y;
  fin >> x >> y;
  cout<<x+y;
  
  fin.close();
  return 0;
}