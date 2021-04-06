#include<iostream>
#include<stdlib.h>
using namespace std;
float num1,num2,n,result;
char choice;
int opt;
void add()
{
        cout<<"Enter two no:"<<endl;
        cin>>num1>>num2;
         result=num1+num2;
                cout<<result;
}

void sub()
{
        cout<<"Enter two no:"<<endl;
        cin>>num1>>num2;
         result=num1-num2;
                cout<<result;
}

void mul()
{
        cout<<"Enter two no:"<<endl;
        cin>>num1>>num2;
         result=num1*num2;
                cout<<result;
}

void div()
{
        cout<<"Enter two no:"<<endl;
        cin>>num1>>num2;
         result=num1/num2;
                cout<<result;
}
int main()
{
do{
    cout<<"***************calculator***************"<<endl;
    cout<<"______________WELCOME TO MENU__________________"<<endl;
    cout<<"1. ADDITION"<<endl;
    cout<<"2. SBTRACTION"<<endl;
    cout<<"3. MULTIPLICATION"<<endl;
    cout<<"4. DIVISION"<<endl;
    cout<<"5. EXIT"<<endl;
    cout<<"Enter your option(1/2/3/4/5):-------\";
    cin>>opt;
    switch(opt)
    {

        case 1: add();
                break;
        case 2: sub();
                break;
        case 3: mul();
                break;
        case 4: div();
                break;
        case 5: exit(0);
        default: cout<<" Please enter a valid option!!!!!!!!!";

      }
        cout<<endl;
        cout<<"Do you want to continue(y/n):";
        cin>>choice;
    }

    while(choice!='n');

}
