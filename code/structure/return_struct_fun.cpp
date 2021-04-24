#include <iostream>
using namespace std;

struct company
{
        float revenue;
        int employees;
};

company combine(company c1,company c2)
{
    company temp;
    temp.revenue= c1.revenue + c2.revenue;
    temp.employees=c1.employees + c2.employees;
    return temp;
}

int main()
{
    company microsoft = {15, 10000};
    company github={5,5000};

    microsoft= combine(microsoft,github);
    cout<<"microsoft"<<endl;
    cout<<"total revenue= "<<microsoft.revenue<<" billions"<<endl;
    cout<<"total employees= "<<microsoft.employees<<endl;
}

