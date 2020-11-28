#include<iostream>
#include<iomanip>
#include<fstream>
#define MAX 80
using namespace std;

int main()
{
   ifstream fin1,fin2;
   fin1.open("Countries.txt");
   fin2.open("Capitals.txt");
   char line[MAX];

   while(!fin1.eof() && !fin2.eof())
   {
       fin1.getline(line,MAX);
       cout<<"The capital city of "<<line<<endl;
       fin2.getline(line,MAX);
       cout<<line<<endl;

   }
   fin1.close();
   fin2.close();
   return 0;
}
