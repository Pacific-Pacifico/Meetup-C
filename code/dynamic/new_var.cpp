#include <iostream>
using namespace std;

int main()
{
    int *ptr=new int(20);
    cout<<*ptr<<endl;
    if(ptr==NULL)
    {
        cout<<"not enough memory"<<endl;
        return 1;
    }
//    *ptr=20;
    delete ptr;
}

