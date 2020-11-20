/* Expected Output: S:10 -20 30
                    S:-10 20 -30 */

#include<iostream>
#include<iomanip>
using namespace std;

class Sample
{
private:
    int num1,num2,num3;
public:
    void getdata(int x,int y,int z)
    {
        num1=x;
        num2=y;
        num3=z;
    }
    void putdata()
    {

        cout<<"S : "<<num1<<num2<<num3<<endl;

    }

    friend void operator -(Sample &s);
};

void operator - (Sample &s)
{
    s.num1=-s.num1;
    s.num2=-s.num2;
    s.num3=-s.num3;
}

int main()
{
    Sample s;
    s.getdata(10,-20,30);
    s.putdata();
    -s;
    s.putdata();
    return 0;
}
