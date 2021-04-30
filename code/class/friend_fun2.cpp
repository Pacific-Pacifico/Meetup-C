#include <iostream>
using namespace std;

class value2;

class value1
{
    int num1;

public:
    value1(int n)
    {
        num1=n;
    }
    friend int maximum(value1 obj1,value2 obj2);
};

class value2
{
    int num2;

public:
    value2(int n)
    {
        num2=n;
    }
    friend int maximum(value1 obj1,value2 obj2);
};

int maximum(value1 obj1,value2 obj2)
{
//    if(obj1.num1 > obj2.num2)
//        return obj1.num1;
//    else
//        return obj2.num2;

    return obj1.num1 > obj2.num2 ? obj1.num1 : obj2.num2;
}

int main()
{
    value1 v1(10);
    value2 v2(20);
    cout<<maximum(v1,v2)<<endl;
}

