/* Sample input 1:

191401001
75
85
95

Sample Output 1:
191401001
76
86
96 */

#include<iostream>
#include<iomanip>
using namespace std;

class Sample
{
private:
    int roll,m1,m2,m3;
public:
    void getdata(int r,int x,int y,int z)
    {
        roll=r;
        m1=x;
        m2=y;
        m3=z;
    }

    void putdata(void)
    {
        cout<<roll<<'\n'<<m1<<'\n'<<m2<<'\n'<<m3<<endl;
    }

    friend void operator ++(Sample &s);


};

void operator ++(Sample &s)
{
    s.roll=s.roll;
    s.m1=s.m1+1;
    s.m2=s.m2+1;
    s.m3=s.m3+1;
}

int main()
{
    Sample s;
    s.getdata(191401001,75,85,95);
    s.putdata();
    ++s;
    s.putdata();
    return 0;
}
