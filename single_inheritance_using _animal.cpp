/*Expected output:
I can eat!
I can sleep!
I can bark!Woof woof!! */
#include<iostream>
#include<iomanip>
using namespace std;

class Animal
{
public:
    void eat()
    {
        cout<<"I can eat!"<<endl;
    }

    void sleep()
    {
        cout<<"I can sleep!"<<endl;
    }
};

class Dog:public Animal{ //derived class

public:
    void bark()
    {
        cout<<"I can bark!Woof woof!!"<<endl;
    }


};

int main()
{
    Dog d;
    d.eat();
    d.sleep();
    d.bark();
    return 0;
}
