#include<iostream>
#include<fstream>
 using namespace std;

 int main()
 {
     ofstream fout; //create output stream
     fout.open("country.txt"); //connect to country
     fout<<"United States of America \n";
     fout<<"United Kingdom \n";
     fout<<"South Korea \n";
     fout.close(); //disconnect country

     fout.open("capital.txt");  //connect country
     fout<<"Washington DC \n";
     fout<<"London \n";
     fout<<"Seoul \n";
     fout.close();  //disconnect capital
     const int N=80;    //size of line
     char line[N];
     ifstream fin;  //create input stream
     fin.open("country.txt");   //connect country to it
     cout<<"Contents of country file\n";
     while(fin)         //checking end of file
     {
         fin.getline(line, N);  //read a line
         cout<<line;            //display it
     }
     fin.close();  //disconnect country
     fin.open("capital.txt");   //connect country to it
     cout<<"Contents of capital file\n";
     while(fin)         //checking end of file
     {
         fin.getline(line, N);  //read a line
         cout<<line;            //display it
     }
     fin.close();

     return 0;
 }

