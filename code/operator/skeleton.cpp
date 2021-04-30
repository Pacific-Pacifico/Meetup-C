#include <iostream>
using namespace std;

class value
{
    int num1;

public:
    value()
    {
        num1=0;
    }

    value(int num1)
    {
        this->num1=num1;
    }


    void display()
    {
        cout<<"num1="<<num1<<endl;
    }
};
int main()
{
}

