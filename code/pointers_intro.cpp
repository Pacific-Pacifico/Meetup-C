#include<iostream>
using namespace std;

/**
pointer syntax:-

data_type  *ptr_variable;        //int *ptr;
**/

int main()
{
//    int *m, n, o;      // n,o ->int  m->pointer
    int a;
    a=10.5;
    cout<<"address of a= "<<&a<<endl;    //&-ampersand ----in c++ ->address of operator

//    int *ptr=NULL;           //ptr is a pointer which will point to any variable of int data type
    int *ptr=NULL;           //ptr is a pointer which will point to any variable of int data type
//     cout<<"value of ptr= "<<ptr<<endl;

    ptr=&a;
    cout<<"value of ptr= "<<ptr<<endl;
    cout<<"value of a="<<a<<endl;
    cout<<"value of a using ptr="<<*ptr<<endl;     // *ptr ----> *(&a)
    cout<<"value of a using * and &="<<*(&a)<<endl;

    cout<<"sizeof ptr"<<sizeof(ptr)<<endl;

    // *  -> pointer declaration
    // * -> dereferencing  operator means "value at the address"



    return 0;
}

