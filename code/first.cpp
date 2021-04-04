#include<iostream>
using namespace std;

/**
function declaration :-

function signature;

function definition syntax:-

return_type func_name(params) ----> function signature
{
    .......
    .......
}
**/

int sum(int,int);

int main()
{
    extern int f; //declaration not definition
    int a,b,c,d; //definition
    int e=50;
    cout<<"value of f="<<f<<endl;
    cout<<"value of a="<<a<<endl; //manipulator
    //cout<<"enter a number=";
    a=5,b=10;
    c=20,d=78;
    cout<<"\nsum="<<sum(a,b);
    cout<<"\tsum="<<sum(c,d);
    cout<<"\tsum="<<sum(4,6);
    cout<<"\tsum="<<sum(56,32);
    cout<<"\nsum="<<sum(34,45);

}

int f=20;
int sum(int num1,int num2)
{
    return num1+num2;
}
