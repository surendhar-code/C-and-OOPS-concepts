/* Expected Output

id of A: 100
id of B: 100
id of C: 100
id of D: 100 */

#include<iostream>
#include<iomanip>
using namespace std;

class code
{
private:
    int id;
public:
    code() //default constructor
    {
        id=100;
    }

    code(int num) //parameterized constructor
    {
        id=num;
    }

    code(code &c) //copy constructor
    {
        id=c.id;
    }

    void display()
    {
        cout<<id<<endl;
    }




};


int main()
{
    code A;
    code B(A); //copy constructor calling
    code C(B);
    code D;
    D=A;
    cout<<"id of A :";
    A.display();
    cout<<"id of B :";
    B.display();
    cout<<"id of C :";
    C.display();
    cout<<"id of D :";
    D.display();
}
