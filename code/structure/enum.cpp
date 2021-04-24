#include <iostream>
#define RED 0
#define YELLOW 1
#define GREEN 2
using namespace std;

void show(int color)
{
    if(color<0 || color>2)
    {
        cout<<"Wrong value"<<endl;
        return;
    }
    cout<<color<<endl;
}

int main()
{
    show(RED);
    show(YELLOW);
    show(GREEN);

    show(300);
}

