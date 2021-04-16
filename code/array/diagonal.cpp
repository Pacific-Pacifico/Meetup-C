#include <iostream>
#define ROW 3
#define COL 3
using namespace std;

//1   2   3
//4   5   6
//7   8   9     diagonal elements= 1 5 9

void diagonal(int arr[][COL])
{
    cout<<"Diagonal elements are: ";
    for( int i=0;i<ROW;i++ )
    {
//        cout<<arr[i][i]<<", ";
        for(int j=0;j<COL;j++)
        {
                if(i==j)
                {
                    cout<<arr[i][j]<<", ";
                }
        }
    }

}

int main()
{
    int matrix[ROW][COL]={{1,2,3},{4,5,6},{7,8,9}};
    diagonal(matrix);
}

