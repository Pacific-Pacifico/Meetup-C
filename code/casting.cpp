#include<iostream>
using namespace std;

// syntax:- (destination data type)var
int main()
{
    int a=10;
    float f=a;  //implicit typecasting/ broadening
    cout<<f<<endl;

    char ch='A';  //character literal
    cout<<"ascii value of"<<ch<<" = "<<(int)ch<<endl;  //explicit typecasting

    cout<<ch+10<<endl;

    bool fl=false;
    cout<<"fl="<<fl<<endl;
//    return 0;
}
