#include <iostream>
#include <cstdio>
#define ROW 3
#define COL 3
using namespace std;

int main()
{
//    int a[2][3]={ {1,2,3} , {4,5,6} } ;   // 2 rows  3 columns
    int a[][3]={ 1,2,3,4,5,6,7,8,9} ;   // 2 rows  3 columns

    for(int i=0;i<ROW;i++)
    {
//        cout<<"i="<<i<<endl;
        for (int j=0;j<COL;j++)
        {
//            cout<<a[i][j]<<"\t";        // a[i]==*(a+i)
            cout<<*(*(a+i)+j)<<"\t";         //a[i][j] == *(*(a+i)+j)
        }
        cout<<endl;
    }

    for( int i=0;i<ROW ;i++ )
    {
        cout<<"row "<<i<<endl;
        for(int j=0;j<COL;j++)
        {
            printf("\nAddress of a[%d][%d] = %u",i , j ,&a[i][j]);
//            printf("\nAddress of a[%d][%d] = %u",i , j ,(*(a+i)+j));
        }
        cout<<endl;
    }

//    int a[2][3]={ 1,2,3 , 4,5,6 } ;   // 2 rows  3 columns
//    for(int i=0;i<2;i++)     // outer loop
//    {
//        cout<<"value of i="<<i<<endl;
//        for(int j=0;j<3;j++)    // inner loop
//        {
////            cout<<a[i][j]<<"\t";
//            cout<<"value of  j="<<j<<endl;
//            cout<<"a["<<i<<"]["<<j<<"]= "<<a[i][j]<<endl;
//            cout<<endl;
//        }
//        cout<<endl;
//    }
    cout<<""<<endl;
}

