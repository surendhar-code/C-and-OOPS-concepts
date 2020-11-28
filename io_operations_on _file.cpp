#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

int main()
{
    char String[20];
    int i;
    cout<<"Enter the string : "<<endl;
    cin>>String;
    fstream file;
    file.open("oops.txt",ios::out);
    int length=strlen(String);
    for(i=0;i<length;i++)
    {
        file.put(String[i]);
    }
    file.put('\n');
    file.close();

    file.open("oops.txt",ios::in);
    char ch;
    while(!file.eof())
    {
        file.get(ch);
        cout<<ch;
    }

    return 0;

}
