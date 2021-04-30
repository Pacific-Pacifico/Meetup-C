#include <iostream>
using namespace std;

class calculator
{
        int num1,num2;
        float fnum1,fnum2;
    public:
//        calculator(int a,int b)
//        {
//            num1=a;
//            num2=b;
//        }

        int sum(int a=40 ,int b=30)
        {
                cout<<"int version called"<<endl;
                num1=a;
                num2=b;
                return num1+num2;
        }

        float sum(float a,float b)
        {
            cout<<"float version called"<<endl;
            fnum1=a;
            fnum2=b;
            return fnum1+fnum2;
        }

};

int main()
{
    calculator c1;
    cout<<c1.sum(5,6)<<endl;
    cout<<c1.sum()<<endl;
    cout<<c1.sum(5.5f,6.3f)<<endl;
}

