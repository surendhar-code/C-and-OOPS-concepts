#include<iostream>
using namespace std;

class student
{
  private:
      static int roll_no;
      char name[10];
  public:
    void getdata()
    {
        roll_no++;
        cin>>name;
    }

    void putdata()
    {
        cout<<"Roll.no : "<<roll_no<<'\n'<<"Name : "<<name<<'\n';

    }
};

int student::roll_no=191401001;
int main()
{
    student s[5];
    for(int i=0;i<5;i++)
    {
        s[i].getdata();
        s[i].putdata();
    }

    return 0;
}


