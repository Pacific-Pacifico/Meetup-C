#include <iostream>
#define MAX 10
using namespace std;

void display(const char *arr[])
{
    for( int i=0;i<6 ;i++ )
    {
        cout<<arr[i]<<endl;
    }
}

int main()
{
    const char *colours[MAX]={"Blue","Black","Red", "White","Green","Yellow"};   //Array of string
    display(colours);
//    for(int i=0;i<6;i++)
//    {
//        for(int j=0;colours[i][j]!='\0';j++)
//        {
//            cout<<colours[i][j];     // char by char printing
//        }
//        cout<<endl;
//    }
//    cout<<endl;
//    for( int i=0;i<6 ;i++ )
//    {
//        cout<<colours[i]<<endl;
//    }
}
