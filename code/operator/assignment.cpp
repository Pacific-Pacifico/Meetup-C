#include <iostream>
using namespace std;

class value
{
    int num1;

public:
    value()
    {

    }

    value(int num1)
    {
        this->num1=num1;
    }


    void display()
    {
        cout<<"num1="<<num1<<endl;
    }


//    obj2=obj1
    value operator=(value obj)
    {
        cout<<"Assignment operator called"<<endl;
        this->num1=obj.num1;
        obj.num1=50;
        return *this;
    }

//    obj2+=obj1;  ->  obj2=obj2+obj1;
    value operator+=(value);
};


value value::operator+=(value obj)
{
//    this->num1 = this->num1 + obj.num1;
    this->num1 += obj.num1;
    return *this;
}

int main()
{

//    int a,b;
//    a=6;
//    b+=a; b=b+a;
    value obj1(10);
    value obj2;
    obj2=obj1;
    obj2.display();
    obj1.display();

    value obj3(100);
    obj3+=obj1;
    obj3.display();
}

