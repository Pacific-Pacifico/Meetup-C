#include <iostream>
using namespace std;
//
//struct address
//{
//    int pincode;
//    int road_no;
//    char city[21];
//};

struct employee
{
    char name[31];
    float salary;
    struct
    {
            int pincode;
            int road_no;
            char city[21];
    }a;
//    address a;
};


int main()
{
    employee e1={"Suresh",50000,{10001,12,"Patna"}};
    cout<<e1.name<<endl;
    cout<<e1.salary<<endl;
    cout<<e1.a.pincode<<endl;
    e1.a.road_no= 100;
    cout<<e1.a.road_no<<endl;
    cout<<e1.a.city<<endl;
}

