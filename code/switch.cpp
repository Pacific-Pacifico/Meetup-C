#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number=";
    cin>>n;
    switch(n)
    {
    case 1:
        cout<<"1"<<endl;
        break;

    case 2:
        cout<<"2"<<endl;
        break;

    case 3:
        cout<<"3"<<endl;
        break;

    default:
        cout<<"other value"<<endl;
    }
    return 0;
}
