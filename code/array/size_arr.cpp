#include <iostream>
#define SIZE 5
using namespace std;

void getsize(int *a)
{
    cout<<"inside getsize , no of elements="<<sizeof(a)/sizeof(int)<<endl;  //4 /4
//    cout<<"inside getsize , no of elements="<<SIZE<<endl;  //4 /4
}

int main()
{
    int a[]={10,20,30,40,50};
    cout<<"no of elements="<<sizeof(a)/sizeof(int)<<endl;    // 20/4
    getsize(a);
}


