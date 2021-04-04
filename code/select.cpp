#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number=";
    cin>>n;
    if(n>0)
        cout<<n<<"is +ve"<<endl;
    else if(n<0)
    {
        cout<<n<<"is -ve"<<endl;
    }
    else
    {
        cout<<n<<"is zero"<<endl;
    }

    if(0)
        cout<<"print 10"<<endl;
    return 0;
}
