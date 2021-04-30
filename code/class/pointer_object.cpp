#include <iostream>
#include<cstring>
using namespace std;

class values
{
    int num1,num2;
    char *str;

public:
    values(int num1,int num2,char *str)
    {
        this->num1=num1;
        (*this).num2=num2;
        strcpy(this->str,str);
    }

    void show()
    {
        cout<<"num1="<<num1<<endl;
        cout<<"num2="<<num2<<endl;
        cout<<"str="<<this->str<<endl;
    }
};

int main()
{
    values v1(5,10,"hello");
    v1.show();

    values v2(100,200,"hi");
    v2.show();
//    values *ptr=&v1;
//    (*ptr).show();
//    ptr->show();
//
//    values &r=v1;
//    r.show();
}

