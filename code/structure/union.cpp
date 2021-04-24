#include <iostream>
using namespace std;

union values
{
    double current_temp;
    int max_temp;
    int min_temp;
    char mode;     // f -> freeze mode, n-> normal mode o->off mode
};

int main()
{
    int option;
    values v1;
//    v1.current_temp=-1.5;
//    v1.mode='o';
    cout<<"Select required option:"<<endl;
    cout<<"1.current temp"<<endl;
    cout<<"2.max temp"<<endl;
    cout<<"3.min temp"<<endl;
    cout<<"4.mode"<<endl;
    cin>>option;

    switch(option)
    {
        case 1:
            v1.current_temp=-1.5;
            cout<<v1.current_temp<<endl;
            break;

        case 2:
            v1.max_temp=10;
            cout<<v1.max_temp<<endl;
            break;

        case 3:
            v1.min_temp=-20;
            cout<<v1.min_temp<<endl;
            break;

        case 4:
            v1.mode='f';
            cout<<v1.mode<<endl;
            break;

        default:
            cout<<"invalid option"<<endl;
    }





    cout<<"size= "<<sizeof(values)<<endl;
}

