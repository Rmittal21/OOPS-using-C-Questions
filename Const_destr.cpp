#include <iostream>
using namespace std;

class base
{
int i;
public:
base(int n){
cout << "Constructing base\n";
i = n;
}
~base(){
cout << "Destructing base\n";
}
void showi(){
cout << i << "\n";
}
};
class derived : public base
{
int j;
public:
derived(int n) : base(n){
// pass argument to  the base class
cout << "Constructing derived\n";
j = n;
}
~derived(){
cout << "Destructing derived\n";
}
void showj(){
cout << j << "\n";
}
};
int main()
{
derived o(10);
o.showi();
o.showj();
return 0;
}

