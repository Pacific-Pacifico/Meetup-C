#include <iostream>
#include <cstdlib>
using namespace std;

int main(int n,char *a[])
{
    cout<<"No of arguments passed= "<<n<<endl;
    int sum=0;
    cout<<a[0]<<endl;
    for(int i=1;i<n;i++)
    {
        sum=sum+atoi(a[i]);
    }
    cout<<"sum="<<sum;
}
