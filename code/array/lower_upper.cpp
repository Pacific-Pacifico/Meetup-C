#include <iostream>
#include <cstring>
using namespace std;

void upper_case(char *,int);
void lower_case(char *,int);

//ascii value A-Z -> 65-90
//ascii value a-z  -> 97-122
// a - 32 -------> A
// 97-32 -------> 65
//
// c-32  ------> C
// 99 -32  ------> 67

int main()
{
    char a[]="Hello wORld";
    upper_case(a,strlen(a));
    cout<<"a="<<a<<endl;     //HELLO WORLD
    lower_case(a,strlen(a));
    cout<<"a="<<a<<endl;     //hello world
}

void upper_case(char *arr ,int len)
{
    for(int i=0;i<len;i++)
    {
        if(arr[i] >=97 &&  arr[i]<=122)
        {
            arr[i] = arr[i]-32;
//                arr[i] = toupper(arr[i]);
        }
    }
}

//A  +32  ---->   a
//65 +32   ----->  97
void lower_case(char *arr ,int len)
{
        for(int i=0;i<len;i++)
        {
                if(arr[i]>=65 && arr[i]<=90)
                {
                    arr[i]=arr[i]+32;
//                    arr[i]=tolower(arr[i]);
                }
        }
}
