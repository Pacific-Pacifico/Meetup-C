#include <iostream>
#include <cstring>

using namespace std;

int main()
{
//    int a[]={1,2,3,4,5}
    char str[]= {'H' , 'E' , 'L' ,'L' ,'O', '\0'};    // '/0' --> NULL
    char str1[]= "HELLO";
    cout<<str1<<endl;

//    for(int i=0; str1[i] != '\0' ; i++)
    for(int i=0; i<strlen(str1) ; i++)
    {
        cout<<str1[i];
    }
}

