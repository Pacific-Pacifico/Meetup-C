#include <iostream>
using namespace std;

struct student
{
    int roll;
    char name[31];
};

void display(student obj)
{
    cout<<"roll="<<obj.roll<<endl;
    cout<<"name="<<obj.name<<endl;
}

void change(student obj)
{
        obj.roll=20;
}

void change_by_pointer(student *obj)
{
//        (*obj).roll=20;
            obj->roll=20;
}

void change_by_reference(student &obj)
{
        obj.roll=20;
}

int main()
{
    student s1={1,"RAM"};
    display(s1);
//    change(s1);
//    change_by_pointer(&s1);
    change_by_reference(s1);
    display(s1);
}

