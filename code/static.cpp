#include<iostream>
using namespace std;

void fun()
{
    return;
    static int n=10;
    cout<<"n="<<n<<endl;
    n++;
//    cout<<"before exiting n="<<n<<endl;
}

int main()
{
    fun();
    fun();
    fun();
}

