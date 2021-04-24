#include <cstring>
#include <iostream>
//#include <cstdlib>
using namespace std;

struct student
{
    int roll;
    char name[20];
};

int main()
{
    student *ptr=new student[10];
//    student *ptr=(student *)malloc(sizeof(student));
    if(ptr==NULL)
    {
        cout<<"not enough memory"<<endl;
        return 1;
    }
//    ptr->roll=1;
//    strcpy(ptr->name,"RAM");

    for( int i=0;i<10 ;i++ )
    {
        ptr[i].roll=i;
        strcpy(ptr[i].name,"RAM");
    }
    for( int i=0;i<10 ;i++ )
    {
        cout<<ptr[i].roll<<endl;
        cout<<ptr[i].name<<endl;
    }
//    cout<<ptr->roll<<endl;
//    cout<<ptr->name<<endl;

    delete [] ptr;
}
