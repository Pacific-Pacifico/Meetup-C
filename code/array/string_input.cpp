#include <iostream>
#include <cstdio>
#include <string.h>
using namespace std;

int main()
{
    char str[100];
    cout<<"Enter ur name: ";
//    cin>>str;
//    gets(str);
    cin.get(str,21);
    cout<<"Length of the str="<<strlen(str)<<endl;


//    string my_str;
//    cout<<"Enter ur name: ";
//    getline(cin,my_str);
//    cout<<my_str<<endl;
}

