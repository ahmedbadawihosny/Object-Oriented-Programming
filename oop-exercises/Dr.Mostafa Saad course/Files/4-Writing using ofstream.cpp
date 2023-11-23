#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  fstream fin("4-writingFile.txt");

  if (fin.fail())
  {
    cout<<"Can't open the file\n";
    return 0;
  }

  int x,y;
  fin >> x >> y;
  fin.close();

  ofstream fout("4-writing output file.txt");

  if(fout.fail())
  {
    cout<<"Can't open the output file\n";
    return 0;
  }

  fout << x + y;
  fout.close();

  return 0;
}