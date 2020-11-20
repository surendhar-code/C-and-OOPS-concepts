/* Expected Output

A=2.7+j3.5
B=1.6+j1.6
C=4.3+j5.1
P=2.5+j3.9
Q=1.6+j2.5
R=4.1+j6.4 */

#include<iostream>
#include<iomanip>
using namespace std;

class complex
{

public:
    float real,imag;
public:

     complex()
     {
         real=0.0;
         imag=0.0;
     }

     complex(int a)
     {

         real=a;
         imag=a;
     }

     complex(int x,int y)
    {
        real=x;
        imag=y;
    }
    friend void complexsum(complex &a,complex &b);
    friend void displaysum(complex &c);


};

complex complexsum(complex &a,complex &b)
{
    complex c;
    c.real=a.real+b.real;
    c.imag=a.imag+b.imag;
    return (c);
}

void display(complex &c)
{
    cout<<real<<" + j"<<imag<<endl;
}


int main()
{
    complex A(2.7,3.5);
    complex B(1.6);
    complex C(complexsum(A,B));

    cout<<"A = ";
    display(A);
    cout<<"B = ";
    display(B);
    cout<<"C = ";
    display(C);


    complex P(2.5,3.9);
    complex Q();
    complex R(complexsum(P,Q));

    cout<<"P = ";
    display(P);
    cout<<"Q = ";
    display(Q);
    cout<<"R = ";
    display(R);

    return 0;
}
