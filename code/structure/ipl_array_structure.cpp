#include <iostream>
using namespace std;

struct team
{
    char name[31];
    int batsmen,bowlers,all_rounders;

    void check()
    {
        int total=batsmen+bowlers+all_rounders;
        if(total!=11)
        {
            cout<<name<<" doesn't have exact 11 players"<<endl;
        }
    }
};

void display(team t[])
{
        for(int i=0;i<8;i++)
        {
            t[i].check();
        }
}

int main()
{
    team ipl_teams[]={
        { "CSK" , 5,3,3},
        { "MI" , 6,4,3},
        { "RCB" , 5,3,3},
        { "KKR" , 5,4,2},
        { "SRH" , 4,3,5},
        { "PK" , 5,3,6},
        { "RR" , 5,3,3},
        { "DC" , 4,2,3},
    };
    display(ipl_teams);
}

