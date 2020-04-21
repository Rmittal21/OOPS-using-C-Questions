#include <iostream>
using namespace std;
 class base
 {
     protected:  // private to base
      int a, b; // but still accessible by derived
     public:
      void setab(int n, int m)
      {
          a = n; b = m;
      }
};
// Inherit as public
class derived : public base
{
  int c;
 public:
  void setc(int n)
  {
      c = n;
  }
  // this function has access to a and b from base
  void showabc( )
  {
   cout << a << "  " << b << "  " << c << "\n";
  }
};
int main( )
{
  derived ob;   // a and b are not accessible here because they  are   private to both base and derived.
  ob.setab(1, 2);
  ob.setc(3);
  ob.showabc( );
  return 0;
}

