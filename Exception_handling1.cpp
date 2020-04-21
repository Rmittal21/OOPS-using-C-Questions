#include<iostream>
using namespace std;

int main()
{
cout<<"Start\n";
try //start a try block
{
cout<<"Inside try block\n";
throw 10;       //throw an error
cout<<"This will not execute\n";
}
catch(int i)
{
cout<<"Caught one! Number is: ";
cout<<i<<"\n";
}
cout<<"end";
return 0;
}

