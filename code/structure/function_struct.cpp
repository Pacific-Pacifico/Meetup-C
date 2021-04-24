#include <iostream>
using namespace std;

struct student
{
        int roll;
        char name[31];

        void display()
        {
            cout<<"roll="<<roll<<endl;
            cout<<"name="<<name<<endl;
        }

        void change();
};

void student::change()          // returntype struct_name::fun_name(parameters)
{
    roll=20;
}

int main()
{
    student s1={1,"RAM"};
    s1.display();
    s1.change();
    s1.display();
}

