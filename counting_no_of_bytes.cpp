#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    fstream file;
    file.open("alphabets.txt",ios::out);
    file<<"ABCDEFGHIJKLMNOPQRSTUVWXYZ";



    cout<<"The byte count of the file is : "<<endl;
    cout<<file.tellp();
    file.close();
    return 0;
}
