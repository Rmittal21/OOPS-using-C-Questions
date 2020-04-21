#include<iostream>
using namespace std;

class Base
{
    public:
    int i;
};
// Inherit Base as virtual
class Derived1 : virtual public Base
{
    public:
    int j;
};
class Derived2 : virtual public Base
{
    public:
    int k;
};
class Derived3 : public Derived1, public Derived2
{
    public:
    int product()
    {
        return i*j*k;
    }
};
int main()
{
    Derived3 ob;
    ob.i = 10; // unambiguous because virtual Base
    ob.j = 3;
    ob.k = 5;
    cout << "Product is: " << ob.product( ) << "\n";
    return 0;
}

