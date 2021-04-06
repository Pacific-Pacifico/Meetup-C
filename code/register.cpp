
#include<iostream>
using namespace std;

int b=20;

int display(register int a)
{
    cout<<"a="<<a<<endl;
}

int main()
{
    display(10);
    register int num=10;     //not compulsory   depends compiler preferenace
    cout<<"num="<<num<<endl;
    cout<<"b="<<b<<endl;
}

