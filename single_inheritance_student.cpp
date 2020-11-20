// Single inheritance using Student class

#include<iostream>
#include<iomanip>
using namespace std;

class student
{
  private:
      int roll_no;
      char name[20];
      char branch[10];
      char gender;
  public:
    void getstudent()
    {
        cout<<"Enter student roll.no: ";
        cin>>roll_no;
        cout<<"Enter student name: ";
        cin>>name;
        cout<<"Enter student branch: ";
        cin>>branch;
        cout<<"Enter student gender: ";
        cin>>gender;

    }

    void displaystudent()
    {
        cout<<"Roll no. : "<<roll_no<<endl;
        cout<<"Name : "<<name<<endl;
        cout<<"Branch : "<<branch<<endl;
        cout<<"Gender "<<gender<<endl;
    }
};


class Result : public student
{
private:
    float cgpa;
    int arrears;
public:
    void getresult()
    {

        cout<<"Enter cgpa : ";
        cin>>cgpa;
        cout<<"Enter no.of arrears : ";
        cin>>arrears;
    }

    void displayresult()
    {
        cout<<"CGPA : "<<cgpa<<endl;
        cout<<"Arrears : "<<arrears<<endl;

    }
};


int main()
{
    Result r;
    r.getstudent();
    r.displaystudent();
    r.getresult();
    r.displayresult();
    return 0;
}
