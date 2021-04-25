#include <iostream>
using namespace std;

inline int max(int a,int b)
{
//    if(a>b)
//        return a;
//    else
//        return b;
    return a>b ? a : b;     //ternary operator
}

int main()
{
    cout<<max(10,20)<<endl;
    cout<<(10>20?10:20)<<endl;
}

