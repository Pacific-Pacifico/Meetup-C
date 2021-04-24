#include <iostream>
using namespace std;

struct rectangle
{
    private:
    float length,breadth;

    float perimeter()
    {
        return 2*(length+breadth);
    }

    float area()
    {
        return length*breadth;
    }

    public:

    rectangle()
    {
        length=2;
        breadth=4;
    }

    rectangle(float l,float b)
    {
        length=l;
        breadth=b;
    }

    ~rectangle()
    {
            cout<<"Destructor called"<<endl;
    }

    void show()
    {
        cout<<"Perimeter of rectangle= "<<perimeter()<<endl;
        cout<<"Area of rectangle= "<<area()<<endl;
    }
};

int main()
{
    rectangle r1(20,10);
//    r1.length=1000;
    r1.show();

    rectangle r2;
    r2.show();
}

