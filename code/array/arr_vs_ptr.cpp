#include <iostream>
#include<cstdio>
using namespace std;

int main()
{
    int a[]={1,2,3,4,5};
    int *p=a;
    cout<<"sizeof p="<<sizeof(p)<<endl;
    cout<<"sizeof a= "<<sizeof(a)<<endl;

    printf("Address of a[0] = %u", &a[0]);
    printf("\nAddress of a = %u", &a);
    printf("\nAddress of a = %u", a);
    printf("\nAddress of a = %u", a+0);


    cout<<endl;
    printf("\nAddress of a[1] = %u", &a[1]);
    printf("\nAddress of a[1]= %u", (a+1));

    printf("\nvalue at address a[1]= %d\n", *(a+1));





//    for(int i=0;i<5;i++)
//    {
//        cout<<a[i]<<endl;
//    }
//
    for(int i=0;i<5;i++)
    {
        cout<<*(a+i)<<endl;
    }
//    cout<<""<<endl;
}

