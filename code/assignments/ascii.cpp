#include<iostream>
using namespace std;

int main()
{
    int i,j;
    for(i='A';i<='Z';i++)
    {
        cout<<"Ascii value of "<<char(i)<<" = "<<i<<endl;
    }
    for(char ch='A';ch<='Z';ch++)
    {
        cout<<"Ascii value of "<<ch<<" = "<<(int)ch<<endl;
    }
    cout<<endl;
    cout<<endl;

    char ch='a';
    while(ch<='z')
    {
        cout<<"Ascii value of "<<ch<<" = "<<(int)ch<<endl;
        ch++;
    }
}

