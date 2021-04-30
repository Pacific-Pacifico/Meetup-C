#include <iostream>
#include <cstdlib>
using namespace std;

class location
{
    double latitude,longitude;
    int *asl;

public:

    location()
    {
        cout<<"default constructor"<<endl;
        latitude=longitude=0;
        asl=new int(0);
        if(asl==NULL)
            exit(1);
    }

    location(double latitude,double longitude,int distance)
    {
        this->latitude=latitude;
        this->longitude=longitude;
        asl=new int(distance);
        if(asl==NULL)
            exit(2);
    }

    location(const location &obj)
    {
//        obj.latitude=10000;
        cout<<"copy constructor"<<endl;
        latitude=obj.latitude;
        longitude=obj.longitude;
//        asl=obj.asl;
        asl= new int(*obj.asl);
        if(asl==NULL)
            exit(3);
    }

    ~location()
    {
        cout<<this<<endl;
        cout<<"destructor called"<<endl;
        delete asl;
    }

    void get_location()
    {
        cout<<"latititude="<<latitude<<endl;
        cout<<"longitude="<<longitude<<endl;
        cout<<"distance above sea level="<<*asl<<endl;
        cout<<endl;
    }

    void set_location(double latitude,double longitude,int asl)
    {
        this->latitude=latitude;
        this->longitude=longitude;
        *(this->asl)=asl;
    }
};

void show(location loc)
{
    loc.get_location();
}

location assign_location(location &loc)
{
    return loc;
}

int main()
{
    location obj1(123.4, 234.5,20);
    cout<<"obj1"<<endl;
    obj1.get_location();

//    location obj2;   //initialize
//    obj2=obj1;   //assignment

    location obj2=obj1;
//    location obj2(obj1);   //copy constructor called
     cout<<"obj2"<<endl;
    obj2.get_location();

    obj2.set_location(999,111,50);
    cout<<"obj2"<<endl;
    obj2.get_location();

    cout<<"obj1"<<endl;
    obj1.get_location();


    cout<<"last obj1"<<endl;
    show(obj1);

    cout<<"obj3"<<endl;
    location obj3=assign_location(obj1);
    obj3.get_location();
}

