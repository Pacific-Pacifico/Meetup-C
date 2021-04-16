#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str[]="Hello World!";
    char str1[15]="HI";
//    strcpy( str1, str);     // strcpy(destination, source);
    char str2[15];
    strcpy(str2,"good morning!");
    cout<<"str2="<<str2<<endl;

    strcat(str1, str);           // strcat(in_which_to_be_concatenated , what_to_be_concatenated);
    cout<<"str1= "<<str1<<endl;
}

