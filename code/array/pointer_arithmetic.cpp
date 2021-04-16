#include <iostream>
#include<cstdio>
using namespace std;

int main()
{
    int a[]={1,2,3,4,5};    // base address of array = address of first element
    int *p=a;
//
    printf("Address of p= %u \n",p);
    cout<<"*p="<<*p<<endl;
    p++;      // p=p+n   -> current_address+ n*sizeof(type)
    printf("\nAddress of p= %u \n",p);
    cout<<"*p="<<*p<<endl;
    p--;          // p=p-n   -> current_address- n*sizeof(type)
    printf("\nAddress of p= %u \n",p);
    cout<<"*p="<<*p<<endl;

    for(int i=0;i<5;i++)
    {
        printf("Address of p= %u \n",p);
        cout<<*p<<endl;
        p++;
    }

//    for(int i=0;i<5;i++)
//    {
//        printf("Address of a[%d]= %u \n",i,a);
//        cout<<*a<<endl;
//        a++;  // a=a+1
//    }

//    cout<<""<<endl;
}

