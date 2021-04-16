#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str1[]="Deepak ji";
    cout<<strstr(str1,"no")<<endl;
//    char *ch= strstr(str1,"p");
//    int pos=ch-str1+1;        // to be discussed
//    cout<<"position= "<<pos<<endl;
    if(strstr(str1,"no"))
        cout<<"given string exists in str1"<<endl;
//    else if(strstr(str1,"no"))
//        cout<<"doesn't exists"<<endl;
}

