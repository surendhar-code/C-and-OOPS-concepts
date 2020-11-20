/* sample input
2
10
3
2

sample output
6 feets and 0 inches*/

#include<iostream>
#include<iomanip>
using namespace std;

class Distance
{
private:
    int feets;
    int inches;
public:
    void getdata(int f,int i)
    {
        feets=f;
        inches=i;
    }

    void putdata()
    {
        cout<<feets<<" feets and "<<inches<<" inches"<<endl;
    }

    void sum(Distance,Distance);

};

void Distance::sum(Distance d1,Distance d2)
{
    inches=d1.inches+d2.inches;
    feets=inches/12;
    inches=inches%12;

    feets=feets+d1.feets+d2.feets;
}

int main()
{
    Distance d1,d2,d3;

    d1.getdata(2,10);

    d2.getdata(3,2);

    d3.sum(d1,d2);
    d3.putdata();
    return 0;
}

