#include <iostream>
#include <cstring>
using namespace std;

class mobile
{
    private:
        float price;
        int model_name;
        char color[10];
        int cores;
        bool fast_charge;
        int imei;
        bool selfie_with_flash;
        int memory;

    public:
        static int counter;
        mobile()
        {
            cout<<"Default constructor called"<<endl;
        }

        mobile(float p,int mn,char c[],int co,bool fc,int im,bool swf,int m)
        {
                counter++;
                price=p;
                model_name=mn;
                strcpy(color,c);
                cores=co;
                fast_charge=fc;
                imei=im;
                selfie_with_flash=swf;
                memory=m;
        }

        void display()
        {
            cout<<price<<endl;
            cout<<model_name<<endl;
            cout<<color<<endl;
            cout<<cores<<endl;
            cout<<fast_charge<<endl;
            cout<<imei<<endl;
            cout<<selfie_with_flash<<endl;
            cout<<memory<<endl;
        }

        void change_color(char *c)
        {
            strcpy(color,c);
        }

        static int get_counter()
        {
           // static member fn can access only static data members directly.
            mobile samsung;
            samsung.cores=8;
            return counter;
        }
};

int mobile::counter;

int main()
{
    cout<<"counter= "<<mobile::get_counter()<<endl;
    cout<<"MI"<<endl;
    mobile mi(1000,1234,"blue",4,false,98712,true,4);
//    mi.display();
//     cout<<mi.get_counter()<<endl;
    cout<<"counter= "<<mi.counter<<endl;
    cout<<"counter= "<<mobile::counter<<endl;
    cout<<endl;
    cout<<"NOKIA"<<endl;
    mobile nokia(1011,4234,"red",8,true,98712,true,4);
//    nokia.display();

//    nokia.change_color("Green");
//    nokia.display();
//    cout<<endl;

//    mi.display();
//    cout<<nokia.get_counter()<<endl;
    cout<<"counter= "<<nokia.counter<<endl;
    cout<<"counter= "<<mobile::counter<<endl;
    cout<<""<<endl
}

