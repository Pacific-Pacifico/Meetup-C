#include<iostream>
using namespace std;

int g= 50;    //lifetime - until program is running //scope -- whole program

void fun()
{
//    return;
    static int n=10;     //lifetime - until program is running //scope /visibility -- in only that function
    cout<<"n="<<n<<endl;
    n++;
//    cout<<"before exiting n="<<n<<endl;
}

int main()
{
//    cout<<"n="<<n<<endl;
    cout<<"g="<<g<<endl;
    fun();
    fun();
    fun();
}

