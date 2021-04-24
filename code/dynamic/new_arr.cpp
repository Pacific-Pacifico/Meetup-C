#include <iostream>
using namespace std;

int main()
{
    int *ptr=new int[10];
    if(ptr==NULL)
    {
        cout<<"memory not enough"<<endl;
        return 1;
    }
    for(int i=0;i<10;i++)
    {
        ptr[i] = i;
    }
    for( int i=0;i<10 ;i++ )
    {
        cout<<ptr[i]<<endl;
    }

    delete [] ptr;
}

