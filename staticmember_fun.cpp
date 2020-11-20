//Static Member function

//Expected Output:
//count:2
//count:3
//object number:1
//object number:2
//object number:3

#include<iostream>
#include<iomanip>
using namespace std;

class test
{
private:
    static int count;
    int code;
public:
    void setcode()
    {
        code=count++;
    }

    void showcode()
    {
        cout<<"object number : "<<code<<'\n';
    }

    static void showcount()
    {
        cout<<"count : "<<count<<'\n';
    }
};

int test::count;
int main()
{
    test t1,t2,t3;
    t1.setcode();
    t2.setcode();
    test::showcount();  //static function
    t3.setcode();
    test::showcount();  //static function
    t2.showcode();
    t3.showcode();
    test t4;
    t4.setcode();
    t4.showcode();
    return 0;




}
