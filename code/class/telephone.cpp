#include <iostream>
using namespace std;

class telephone
{

public:
    int region_code;
    int number;

    telephone()
    {
        cout<<"Default constructor"<<endl;
    }

    telephone(int region_code,int number)
    {
        this->region_code=region_code;
        this->number=number;
    }

    void show()
    {
        cout<<region_code<<"-";
        cout<<number<<endl;
    }

    static telephone assign_telephone()
    {
        static int r=1000;
        static int n=900000;
        telephone obj;
        obj.region_code=r;
        obj.number=n;
        r++;
        n++;
        return obj;
    }
};

void change(telephone t)
{
    t.region_code=1234;
    t.number=456789;
}

void change_by_ptr(telephone *p)
{
    p->region_code=1000;
    p->number=900000;
}

void change_by_ref(telephone &t)
{
    t.region_code=1234;
    t.number=456789;
}

telephone assign_telephone()
{
    static int r=1000;
    static int n=900000;
    telephone obj;
    obj.region_code=r;
    obj.number=n;
    r++;
    n++;
    return obj;
}

int main()
{
//    telephone t;
    telephone t1(6214,987654);
    t1.show();
    change(t1);
//    change_by_ptr(&t1);
//    change_by_ref(t1);
    t1.show();
//    telephone t2=t1;
//    t2.show();
    telephone t=telephone::assign_telephone();
    t.show();

    telephone t3=telephone::assign_telephone();
    t3.show();


//    telephone t=assign_telephone();
//    t.show();
//
//    telephone t3=assign_telephone();
//    t3.show();

}

