/* Expected Output
Ram
Lakshman
kumar
Ram Lakshman
Ram Lakshman Kumar */

#include<iostream>
#include<iomanip>
#include<string.h>
using namespace std;

class String
{
private:
    char*name;
    int length;
public:
    String()
    {
        length=0;
        name=new char[length+1];
    }

    String(char*s)
    {
        length=strlen(s);
        name=new char[length+1];
        strcpy(name,s);
    }

    void display()
    {
        cout<<name<<endl;

    }
    void join(String &n1,String &n2)
    {
        length=n1.length+n2.length;
        name=new char[length+1];
        strcpy(name,n1.name);
        strcat(name,n2.name);
    }



};

int main()
{
    String name1((char *) "Ram"),name2((char *) "Lakshman"),name3((char *)"Kumar"),s1,s2;
    name1.display();
    name2.display();
    name3.display();
    s1.join(name1,name2);
    s1.display();
    s2.join(s1,name3);
    s2.display();
    return 0;

}
