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

    value operator-()
    {
//            this->num1=-this->num1;
            num1=-num1;
            return *this;
    }

    value operator++();
    value operator++(int);

};

//obj++; obj=obj+1;
value value::operator++()
{
    num1=num1+1;
    return *this;
}

value value::operator++(int n)
{
    num1=num1+1;
    return *this;
}

int main()
{
    value obj1(100);
    value obj2;
//    obj2=-obj1;
    obj2=obj1.operator-();
    obj2.display();

    value obj3(50);
    ++obj3;
//    obj3.operator++();
    obj3.display();

    obj3++;
    obj3.display();
}

