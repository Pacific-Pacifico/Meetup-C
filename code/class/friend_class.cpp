#include <iostream>
using namespace std;

class values
{
    int num1,num2;

public:
    values(int a,int b)
    {
        num1=a;
        num2=b;
    }
    friend class Max;
};

class Max
{
public:
        int maximum(values obj)
        {
            if(obj.num1 > obj.num2)
                return obj.num1;
            else
                return obj.num2;
        }
};

int main()
{
    values v1(10,20);
    Max m1;
    cout<<m1.maximum(v1)<<endl;
}


