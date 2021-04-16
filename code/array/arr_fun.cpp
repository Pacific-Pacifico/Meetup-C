#include <iostream>
using namespace std;

int sum1(int arr[5])
{
    int s=0;
    for( int i=0;i<5 ;i++ )
    {
        s+=arr[i];
    }
    return s;
}

int sum2(int arr[])
{
    int s=0;
    for( int i=0;i<5 ;i++ )
    {
        s+=arr[i];
    }
    return s;
}

int sum3(int *arr)
{
    int s=0;
    for( int i=0;i<5 ;i++ )
    {
        s+=arr[i];
    }
    return s;
}

void change(int *arr,int size_arr)
{
    for( int i=0;i<size_arr ;i++ )
    {
        arr[i] = arr[i] * 10;
    }
}

int main()
{
    int a[]={10,20,30,40,50};
    cout<<"sum1= "<< sum1(a)<<endl;
    cout<<"sum2= "<< sum2(a)<<endl;
    cout<<"sum3= "<< sum3(a)<<endl;

    change(a,5);
    for( int i=0;i<5 ;i++ )
    {
        cout<<a[i]<<endl;
    }
}
