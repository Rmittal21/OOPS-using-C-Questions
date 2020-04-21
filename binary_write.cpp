#include<iostream>
#include<fstream>
using namespace std;

int main()
{
int arr[3];
int marks[]={98,99,100};
fstream file;
file.open("temp.txt",ios::out|ios::binary);
file.write((char *)marks, sizeof(marks));
file.close();

file.open("temp.txt",ios::out|ios::binary);
file.read((char *)arr, sizeof(marks));//read data
cout<<"Marks obtained ";
for(int i=0;i<3;i++)
cout<<arr[i]<<" ";
file.close();
}

