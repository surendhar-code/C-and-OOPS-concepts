/* Expected Output

OBJECT 1
m=0
n=100
OBJECT 2
m = 25
n = 75 */

#include<iostream>
#include<iomanip>

using namespace std;

class Integer
{
private:
    int num1,num2;
public:
    Integer(int m,int n)
    {
        num1=m;
        num2=n;
    }

    void display()
    {
        cout<<"m = "<<num1<<'\n'<<"n = "<<num2<<endl;
    }
};

int main()
{
    Integer I1(0,100);
    Integer I2(25,75);
    cout<<"OBJECT 1\n";
    I1.display();
    cout<<"OBJECT 2\n";
    I2.display();
    return 0;

}
