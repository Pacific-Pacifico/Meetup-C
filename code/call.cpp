#include<iostream>
using namespace std;

//top down approach
void change(int);
void change_using_pointer(int *);
void change_using_reference(int &);

int main()
{
    int n=10;
    change(n);
    cout<<"n after calling change()="<<n<<endl;

//    change_using_pointer(&n);
//    cout<<"n after calling change_using_pointer()="<<n<<endl;

    change_using_reference(n);
    cout<<"n after calling change_using_reference()="<<n<<endl;
}

void change(int num)     //call by value
{
    num++;    //num=num+1;
    return;
}

void change_using_pointer(int *p)
{
    *p=*p + 1; // *p= n+1;  --> // n=n+1   //asterisk
}

void change_using_reference(int &p)
{
    p=p + 1; // *p= n+1;  --> // n=n+1
}


