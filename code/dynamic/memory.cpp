#include <iostream>
using namespace std;

int g;    //uninitialized global section
int g1=10;  //initialized global section

int main()
{
    int n;
    cout<<"enter size of array="<<endl;
    cin>>n;
    int a[20];
    static int s;    //uninitialized
    static int s1=25;  //initialized
    int a;     //stack
    cout<<""<<endl;
}
