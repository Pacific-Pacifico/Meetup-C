#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    // A_Z -> 65_90
    // a_z ->  97_122
    char str1[]="hello World";
    char str2[]="hEllo World";
    int value;
    cout<<"strcmpi= "<<strcmpi(str1,str2)<<endl;
    value=strcmp(str1,str2);    // 0 when both strings are equal
                                         // 1 when str1 > str2  or  >0
                                         // -1 when str1 < str2 or <0
    cout<<"value="<<value<<endl;
    if(value==0)
        cout<<"Strings are equal"<<endl;
    else if(value<0)
        cout<<str1<<" < "<<str2<<endl;
    else
        cout<<str1<<" > "<<str2<<endl;

    if(strlen(str1) > strlen(str2))
        cout<<"str1 > str2"<<endl;
    else
        cout<<"str2 > str1"<<endl;
}

