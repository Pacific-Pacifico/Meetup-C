#include <iostream>
using namespace std;

//char a[] vs const char *a

int main()
{
//    char a[]="Hello";
    const char *a="Hello";
    a[3]='o';
    cout<<a<<endl;
    return 0;
}

