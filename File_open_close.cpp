#include<fstream>
#include<iostream>
using namespace std;

int main()
{
ofstream fout;
ifstream fin;
char fname[20];
cout<<"Enter file name: ";
cin.get(fname,20);
fout.open(fname, ios::out);
if(!fout)
{
cout<<"Error in opening the file";
}
else
{
cout<<"File successfully opened";
}
fout.close();
return 0;
}

