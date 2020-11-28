#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;

int main()
{
   int i;
   float height[4]={175.4,182.3,156.1,163.4};
   ofstream fout;
   fout.open("binary.bin",ios::binary);
   for(int i=0;i<4;i++)
   {
       fout.write((char*)&height,sizeof(height));
   }
   fout.close();

   ifstream fin;
   fin.open("binary.bin");
   fin.read((char*)&height,sizeof(height));
   for(int i=0;i<4;i++)
    cout<<fixed<<setprecision(2)<<height[i]<<endl;
   fin.close();
   return 0;
}
