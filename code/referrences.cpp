#include<iostream>
using namespace std;

/**
reference:-

datatype &ref_name = var;
**/
int main()
{
    int n=10;
    int &r=n;   //alias implicitly pointer   reference declaration

    r--;
    cout<<"n="<<n<<endl;
}



