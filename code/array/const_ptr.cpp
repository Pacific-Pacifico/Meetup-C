#include <iostream>
using namespace std;

int main()
{
    int a=100,b=200;
    int *const p=&a;      //  constant pointer
//    *p=300;
//    cout<<"*p="<<*p<<endl;
    p=&b;
    cout<<"*p="<<*p<<endl;
}

