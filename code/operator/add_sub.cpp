#include <iostream>
using namespace std;

class value
{
    int num1;

public:
    value()
    {

    }

    value(int num1)
    {
        this->num1=num1;
    }

    void display()
    {
        cout<<"num1="<<num1<<endl;
    }

//    return_type operator<operator_oveload>(arg_list)
//    {
//        operations;
//    }

    value operator+(value obj)
    {
        cout<<"+ operator called"<<endl;
        value temp;
        temp.num1=num1+obj.num1;
        return temp;
    }

//    void operator+(value obj)
//    {
//        cout<<"+ operator called"<<endl;
//        value temp;
//        temp.num1=num1+obj.num1;
//        cout<<temp.num1<<endl;
//    }

    value operator-(value);   //prototype
};

value value::operator-(value obj)
{
    cout<<"- operator called"<<endl;
    value temp;
    temp.num1=num1-obj.num1;
    return temp;
}

int main()
{
    value obj1(10);
    value obj2(20);
//    value obj3=obj1+obj2;
    value obj3=obj1.operator+(obj2);
//    obj1+obj2;
    obj3.display();
//    (obj1+obj2).display();     //temp.display();
//    cout<<obj1.operator+(obj2)<<endl;

//    value obj4 = obj1-obj2;
    value obj4=obj1.operator-(obj2);
    obj4.display();

}

