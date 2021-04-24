#include <iostream>
using namespace std;

struct student
{
    int roll;
    char name[31];
};

int main()
{
    student s1={1,"RAM"};
    cout<<s1.roll<<endl;
    cout<<s1.name<<endl;

    student *p=&s1;
     cout<<(*p).roll<<endl;
    cout<<(*p).name<<endl;

    cout<<p->roll<<endl;
    cout<<p->name<<endl;

    student &r=s1;
    cout<<r.roll<<endl;
    cout<<r.name<<endl;
}

