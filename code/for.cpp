#include<iostream>
using namespace std;

int main()
{
    int n,sum=0;
    cout<<"Enter a number=";
    cin>>n;
//    for(initialization;condition;update)
    for(int i =1; i<=n ;i++)
    {
        sum=sum+i;
    }

//    for(;  ;)
//    {
//        cout<<"hello"<<endl;
//    }
//        cout<<"value of i="<<i<<endl;
//        cout<<"value of sum="<<sum<<endl;
    cout<<"\nsum="<<sum;
    return 0;
}
