#include<iostream>
using namespace std;

int main()
{
    int n,sum=0;
    cout<<"Enter a number=";
    cin>>n;
    int i=1;
    do       //exit control loop
    {
        sum=sum+i;
        cout<<"value of i="<<i<<endl;
          cout<<"value of sum="<<sum<<endl;
        i++;
    }while(i<=n);
    return 0;
}
