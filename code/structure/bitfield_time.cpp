#include <iostream>
using namespace std;

struct time
{
    unsigned hour : 5;
    unsigned minute :  6;
    unsigned second: 6;
    unsigned week : 3;
    unsigned date: 5;
    unsigned month: 4;
    unsigned year: 12;
};

int main()
{
    time t1={10,34,56,3,30,12,1998};
    cout<<t1.hour<<endl;
    cout<<t1.minute<<endl;
    cout<<t1.second<<endl;
    cout<<t1.week<<endl;
    cout<<t1.date<<endl;
    cout<<t1.month<<endl;
    cout<<t1.year<<endl;

    cout<<"size="<<sizeof(t1)<<endl;
}

