#include<iostream>
using namespace std;

int main()
{
	cout<<"Enter name :";
	char c[10];
	cin.getline(c,10); //It takes 10 characters as input;
	cout<<c<<endl;
	return 0;
}

