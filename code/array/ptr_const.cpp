#include <iostream>
using namespace std;

int main()
{
    const int a=10;
//    int *ptr=&a;
//    cout<<&a<<endl;
//    cout<<ptr<<endl;
//    *ptr=20;
//    cout<<*ptr<<endl;
//    cout<<"a="<<a<<endl;
//    pointer to a constant

   const int *p=&a;
//    *p=100;
//    *p=20;
    int b=20;
    p=&b;
    cout<<"*p="<<*p<<endl;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
}

