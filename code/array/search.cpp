#include <iostream>
using namespace std;

//Linear search algorithm

int main()
{
    int d;
    bool flag=false;
    int num_list[]={12,34,56,89,67,46,56,65,56,65,100,102};
    cout<<"enter the searching element= ";
    cin>>d;
//    if(num_list[0]==d)
//        cout<<"found at 0th index"<<endl;
//    if(num_list[1]==d)
//         cout<<"found at 1st index"<<endl;
    for(int i=0 ;i<12 ;i++ )
    {
        if(num_list[i]==d)
        {
            cout<<"found at "<< i <<"th index"<<endl;
            flag=true;
//            break;
        }
    }

    if(flag==false)
    {
        cout<<d<<" not found!!"<<endl;
    }
}

