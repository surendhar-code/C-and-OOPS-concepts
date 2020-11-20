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

    void operator ++()
    {
        roll=roll;
        m1=m1+1;
        m2=m2+1;
        m3=m3+1;
    }


};

int main()
{
    Sample s;
    s.getdata(191401001,75,85,95);
    s.putdata();
    ++s;
    s.putdata();
    return 0;
}
