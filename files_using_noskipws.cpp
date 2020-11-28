#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    fstream file;
    file.open("sample.txt",ios::out);
    file<<"Rajalakshmi Engineering College\nThandalam\nChennai\n";
    file.close();

    file.open("sample.txt",ios::in);
    char ch;
    while(!file.eof())
    {
        file>>noskipws>>ch;
        cout<<ch;
    }

    file.close();
    return 0;

}
