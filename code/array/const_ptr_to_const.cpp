#include <iostream>
using namespace std;

int main()
{
    int a=100,b=200;
    const int *const p=&a;
//    *p=300;
//    p=&b;
    cout<<"*p="<<*p<<endl;
}

