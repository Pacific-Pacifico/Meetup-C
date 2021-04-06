#include<iostream>
using namespace std;

void display(int n)     //formal parameter /parameter/ formal argument
{
    n+=10;   //n=n+10
    cout<<"inside display n="<<n<<endl;
}

void display(float f, int number,int num=15)            //function overloading
{
    cout<<"float f="<<f<<endl;
    cout<<"no argument display() called"<<endl;
    cout<<"value of number="<<number<<endl;
    cout<<"value of num="<<num<<endl;
}

int main()    //calling fn
{
    int n=5;
    cout<<"before display() n="<<n<<endl;
    float f=2.5;
    display(n);    //called fn      //actual parameter /argument/ actual argument
    cout<<"inside main n="<<n<<endl;
}

