#include <iostream>
using namespace std;

enum tl_color
{
    RED,YELLOW,GREEN
};

typedef tl_color tc;
typedef  float f;
typedef unsigned int ui;

void show(tl_color color)
{
    cout<<color<<endl;
}

int main()
{
//    f value=20.5;   //float f =20.5;
    ui value=50;
    cout<<"value="<<value<<endl;
    tl_color c;
//    tc c;
    c=RED;
    c=YELLOW;
    c=GREEN;
    show(RED);
    show(YELLOW);
    show(GREEN);
//    show(300);
}


