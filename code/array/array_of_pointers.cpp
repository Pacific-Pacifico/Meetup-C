#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int a=5,b=10,c=50;
    int *ptr[3];      // Array of pointers
    ptr[0]=&a;
    ptr[1]=&b;
    ptr[2]=&c;

    printf("\n&ptr[0] = %u",&ptr[0]);
    printf("\n&ptr[1] = %u",&ptr[1]);
    printf("\n&ptr[2] = %u",&ptr[2]);

    cout<<endl;
    cout<<"*ptr[0]= "<<*ptr[0]<<endl;
    cout<<"*ptr[1]= "<<*ptr[1]<<endl;
    cout<<"*ptr[2]= "<<*ptr[2]<<endl;
}
