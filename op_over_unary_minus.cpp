//Expected output
// S: 10 -20 30
// S:-10 20 -30

//overloading unary minus

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
        cout<<"S : "<<num1<<" "<<num2<<" "<<num3<<endl;
    }

    void operator - (); //overloading unary minus
};

void Sample::operator -()
{
    num1=-num1;
    num2=-num2;
    num3=-num3;
}

int main()
{
    Sample s1;
    s1.getdata(10,-20,30);
    s1.putdata();
    -s1;
    s1.putdata();
    return 0;
}
