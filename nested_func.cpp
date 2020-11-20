#include<iostream>
#include<iomanip>
using namespace std;

class student
{

private:
    static int counts;
    int roll;
    char name[20];
    int cgpa;
public:
    void alldata()
    {
        counts+=1;
        cout<<"Enter the roll.no :\n";
        cin>>roll;
        cout<<"Enter the name\n";
        cin>>name;
        cout<<"Enter the cgpa of the student\n";
        cin>>cgpa;

        displaydata(); //nested function
    }
    void displaydata()
{
    cout<<"Roll no. :"<<roll<<'\n'<<"Name : "<<name<<'\n'<<"CGPA : "<<cgpa<<endl;
}
    void getcount()
    {
        cout<<"count value : "<<counts<<endl;
    }

};

int student :: counts;

int main()
{
    student s1,s2,s3;
    s1.getcount();
    s2.getcount();
    s3.getcount();
    s1.alldata();
    s2.alldata();
    s3.alldata();
    s1.getcount();
    s2.getcount();
    s3.getcount();
    return 0;
}
