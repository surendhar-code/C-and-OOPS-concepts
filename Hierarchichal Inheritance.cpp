//Hierarchichal Inheritance

#include<iostream>
#include<iomanip>
using namespace std;

class BasicInfo   //Base class
{
protected:
    int empID;
    char name[20];
    char gender[20];
public:
    void getbasicinfo()
    {
        cout<<"Enter empId : ";
        cin>>empID;
        cout<<"Enter name : ";
        cin>>name;
        cout<<"Enter Gender : ";
        cin>>gender;
    }

};

class DeptInfo : private BasicInfo
{
protected:
    char deptName[30];
    int managerid;
    char location[30];
public:
    void getDeptInfo(void)
    {
        getbasicinfo();
        cout<<"Enter Department Name : ";
        cin>>deptName;
        cout<<"Enter manager id : ";
        cin>>managerid;
        cout<<"Enter location : ";
        cin>>location;
    }


    void displaydeptinfo()
    {
        cout<<"Employees Information"<<endl;
        cout<<"Basic Information"<<endl;
        cout<<"Employee ID :"<<empID<<endl;
        cout<<"Name : "<<name<<endl;
        cout<<"Gender : "<<gender<<endl;
        cout<<"Department Information : "<<endl;
        cout<<"Department Name : "<<deptName<<endl;
        cout<<"Manager Id : "<<managerid<<endl;
        cout<<"Location : "<<location<<endl;
    }

};

class loaninfo : private BasicInfo
{
protected:
    char type[30];
    int amount;
public:
    void getLoanInfo(void)
    {
        getbasicinfo();
        cout<<"Enter Loan Type : ";
        cin>>type;
        cout<<"Enter Loan Amount : ";
        cin>>amount;

    }

    void displayloaninfo(void)
    {
        cout<<"Employees Information"<<endl;
        cout<<"Basic Information"<<endl;
        cout<<"Employee ID :"<<empID<<endl;
        cout<<"Name : "<<name<<endl;

        cout<<"Gender : "<<gender<<endl;
        cout<<"Loan Information : "<<endl;
        cout<<"Loan Type : "<<type<<endl;
        cout<<"Loan Amount : "<<amount<<endl;


    }
};

int main()
{
    DeptInfo d;
    d.getDeptInfo();
    d.displaydeptinfo();

    cout<<"-----------------------------------------------------------"<<endl;
    loaninfo l;
    l.getLoanInfo();
    l.displayloaninfo();
    return 0;

}
