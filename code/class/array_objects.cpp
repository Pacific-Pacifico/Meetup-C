#include <iostream>
using namespace std;

class value
{
    int a;

    public:
        value()
        {
            a=0;
        }

        value(int a)
        {
            this->a=a;
        }

        value(int a,int b)
        {
            this->a=a;
        }
        void show()
        {
            cout<<"a="<<a<<endl;
        }

        void assign_value(int a)
        {
            this->a=a;
        }
};

int main()
{
//    value obj(300);
//    value obj=300;
//    obj.show();
    value *ptr=new value();
    ptr->show();
    delete ptr;

    value v[10]={value(10,30),value(20),30,40,50,60,70,80,90,100};
    int i;
//    for(i=0;i<10;i++)
//    {
//        v[i].assign_value(i);
//    }
    for(i=0;i<10;i++)
    {
        v[i].show();
    }
}

