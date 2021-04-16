#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str1[]="Deepak ji";
//    cout<<strchr(str1,'a');
    char *ch= strchr(str1,'p');
    int pos=ch-str1+1;        // to be discussed
    cout<<"position= "<<pos<<endl;
    if(strchr(str1,'n'))
        cout<<"given character exists in str1"<<endl;
    else
        cout<<"doesn't exists"<<endl;
}

