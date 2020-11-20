/* Expected Output
a=5
a=5
b=10
c=50
a=5
b=20
c=100 */

#include<iostream>
#include<iomanip>
using namespace std;

class A
{
private:
    int a;
public:
    int b;
    void setab(int x,int y)
    {
        a=x;
        b=y;
    }
    void display_ab()
    {
        cout<<"a = "<<a<<'\n'<<"b = "<<b<<endl;
    }
    int geta(void)
    {
        return a;
    }
    void display_a()
    {
        cout<<"a = "<<a<<endl;
    }


};

class B:public A
{
    int c;
public:
    void mul()
    {
        c=geta()*b;
    }

    void display_mul()
    {
        cout<<"C = "<<c<<endl;
    }
};

int main()
{
    B b;
    b.setab(5,10);
    b.display_a();
    b.display_ab();

    b.mul();
    b.display_mul();
    b.b=20;
    b.display_ab();
    b.mul();
    b.display_mul();
    return 0;
}
