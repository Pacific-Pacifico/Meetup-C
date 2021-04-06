#include<iostream>
using namespace std;

int g=10;

int main()
{
    int g=20;   //shadowing
    cout<<"g="<<g<<endl;
    cout<<"global g="<<::g<<endl;
}

