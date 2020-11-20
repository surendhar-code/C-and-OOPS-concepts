/*Sample output
Manager : 1
Name : Arun
Age : 30

Manager : 2
Name : Babu
Age : 31 */

#include <iostream>
#include <iomanip>
using namespace std;
class manager
{
private:
    int roll;
    char name[20];
    int age;
public:
    void setdata()
    {
        cout<<"Enter the roll no. of the manager\n";
        cin>>roll;
        cout<<"Enter the name of the manager\n";
        cin>>name;
        cout<<"Enter the age of the manager\n";
        cin>>age;
    }

    void displaydata()
    {
        cout<<"Manager : "<<roll<<endl;
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
    }


};


int main()
{
    manager m[3];
    for(int i=0;i<3;i++)
    {
        m[i].setdata();
        m[i].displaydata();
    }

    return 0;
}
