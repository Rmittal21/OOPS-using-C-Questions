#include<iostream>
using namespace std;

int main()
{
int a,b;
cout<<"Enter values";
cin>>a;
cin>>b;
int x=a-b;
try{
if(x!=0){
cout<<"result(a/x)"<<a/x<<endl;
}
else{
throw(x);
}
}
catch(int i)
{
cout<<"Exception caught";
}
cout<<"END";
return 0;
}

