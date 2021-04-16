#include <iostream>
using namespace std;

int main()
{
    int a[5];  //{ 1,2,3,4,5}
    int *ptr[5];
    cout<<"Enter values: "<<endl;
    for( int i=0;i<5  ;i++ )
    {
        cin>>a[i];
    }
    for(int i=0;i<5;i++)
    {
        ptr[i]=&a[i];
    }

    for(int i=0;i<5;i++)
    {
        cout<<"a["<<i<<"]= "<<*ptr[i]<<endl;
    }
}

