/* Implementing Destructors*/

#include<iostream>
#include<iomanip>
using namespace std;
int Count=0;
class alpha
{
  public:
    alpha()
    {
        ++Count;
        cout<<"No.object created "<<Count<<endl;

    }
    ~alpha()
    {
        cout<<"No.of object destroyed : "<<Count<<endl;
        --Count;
    }
};

int main()

{
    cout<<"Enter into main"<<endl;
    alpha A,B,C,D;
    {
        cout<<"Enter block one"<<endl;
        alpha E;

    }

    {

        cout<<"Enter block two"<<endl;
        alpha F;
    }

    cout<<"Return to main"<<endl;
    return 0;
}
