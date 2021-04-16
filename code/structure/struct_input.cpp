#include <iostream>
#include <stdio.h>
using namespace std;

struct  student     //global structure
{
    //members ,fields,elements
    int roll;    // 4 bytes
    char name[20];    // 1*20 =20
    float percent;      // 4
};

void change(student &obj)
{
    obj.roll=10;
}

void display(student obj)     //formal argument
{
    change(obj);         // called fn
    cout<<"name: "<<obj.name<<endl;
    cout<<"roll: "<<obj.roll<<endl;
    cout<<"percent: "<<obj.percent<<endl;
}

int main()
{
    student s2={1,"RAM",45};
    display(s2);     //actual argument
//    student s1;
//    cout<<"Enter name: "<<endl;
//    cin.get(s1.name,20);
//    cout<<"Enter roll="<<endl;
//    cin>>s1.roll;
//    cout<<"Enter percent"<<endl;
//    cin>>s1.percent;
////    fflush(stdin);

//    cout<<"name: "<<s1.name<<endl;
//    cout<<"roll: "<<s1.roll<<endl;
//    cout<<"percent: "<<s1.percent<<endl;
}

