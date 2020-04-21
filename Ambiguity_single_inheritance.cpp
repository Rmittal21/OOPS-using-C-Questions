#include<iostream>
using namespace std;

class A
{
public:
    void display()
    {
cout<<"A\n";
    }
};

class B: public A
{
    public:
        void display()
        {
            cout<<"B\n";
        }

};

int main()
{
B b; //derived class object
b.display(); //invokes display() in B
b.A::display(); //invokes display() in A
b.B::display(); //invokes display() in B
return 0;
}

