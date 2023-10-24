#include <iostream>
using namespace std;

class Relational
{
private:
  int x,y,z;
public:
  Relational()
  {
    x = y = z = 0;
  }

  Relational(int x,int y,int z)
  {
    this -> x = x;
    this -> y = y;
    this -> z = z;
  }

  bool operator==(Relational ob)
  {
    return (x == ob.x && y == ob.y && z == ob.z);
  }

  bool operator<(Relational ob)
  {
    return (x < ob.x && y < ob.y && z < ob.z);
  }

  bool operator<=(Relational ob)
  {
    return (x <= ob.x && y <= ob.y && z <= ob.z);
  }

  bool operator>(Relational ob)
  {
    return (x > ob.x && y > ob.y && z > ob.z);
  }

  bool operator>=(Relational ob)
  {
    return (x >= ob.x && y >= ob.y && z >= ob.z);
  }

  bool operator!=(Relational ob)
  {
    return (x != ob.x && y != ob.y && z != ob.z);
  }
};

int main()
{
  Relational ob1(10, 10, 10), ob2(10, 10, 10);

  if (ob1 == ob2)  // if (ob1.operator(ob2))
  cout <<"The two objects are equal.\n";
  else
  cout<<"The two objects are not equal.\n";

  // that was true and will be prient: The two objects are equal.

  Relational ob3(10, 10, 10), ob4(10, 10, 11);

  if (ob3 == ob4)
  cout <<"The two objects are equal.\n";
  else
  cout<<"The two objects are not equal.\n";

  // that was false and will be prient: The two objects are not equal.

  Relational ob5(10,20,30),ob6(40,50,60);

  if (ob5 < ob6)
  cout<<"ob5 is less than ob6.\n";
  else
  cout<<"ob6 is less than ob5.\n";

  // that was true and will be prient: ob5 is less than ob6.

  Relational ob7(1,1,1),ob8(1,1,1);

  if (ob7 <= ob8)
  cout<<"ob7 is less than or equal ob8.\n";
  else
  cout<<"ob8 is not less than or equal ob7.\n";

  // that was true and will be prient: ob7 is less than or equal ob8.

  Relational ob9(20,20,20),ob10(10,10,10);
  if (ob9 > ob10)
  cout<<"ob9 is greater than ob10.\n";
  else
  cout<<"ob10 is greater than ob9.\n";

  // that was true and will be prient: ob9 is greater than ob10.

  Relational ob11(2,2,2),ob12(1,1,1);

  if (ob11 >= ob12)
  cout<<"ob11 is greater than or equal ob12.\n";
  else
  cout<<"ob11 is not greater than or equal ob12.\n";

  // that was true and will be prient: ob11 is greater than or equal ob12.

  Relational ob13(5,4,2),ob14(1,8,9);

  if (ob13 != ob14)
  cout<<"ob11 is not equal ob12.\n";
  else
  cout<<"ob11 is equal ob14.\n";

  // that was true and will be prient: ob11 is not equal ob12.

  return 0;
}