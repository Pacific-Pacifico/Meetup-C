#include <iostream>
using namespace std;

struct likes
{
    bool pizza:1;     //bitfield
    bool burger : 1;
    bool momos : 1;
    bool bhindi : 1;
    bool karela : 1;
};

int main()
{
    likes guest={true,true,true,false,false};
    cout<<guest.pizza<<endl;
    cout<<guest.burger<<endl;
    cout<<guest.momos<<endl;
    cout<<guest.bhindi<<endl;
    cout<<guest.karela<<endl;
    cout<<"sizeof likes="<<sizeof(likes)<<endl;
}

