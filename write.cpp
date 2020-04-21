#include<iostream>
using namespace std;

int main()
{
	cout<<"Enter name : ";
	char c[10];
	cin.getline(c,10); //It takes 10 charcters as input;
	cout.write(c,9); //It reads only 9 character from buffer c;

	return 0;
}

