#include<iostream>
using namespace std;

class M
{
public:
    	void display(void)
    	{
        		cout<<"Class M\n";
    	}
};
class N
{
public:
    	void display(void)
    	{
        		cout<<"Class N\n";
    	}
};

class P: public M, public N
{
public:
    void display(void) //overrides display() of M and N
    {
        M::display();
    }
};

int main()
{
    P p;
    p.display();
}

