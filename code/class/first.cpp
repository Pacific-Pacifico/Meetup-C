#include <iostream>
//using namespace std;

class bank
{
    //public:
    private:
        //data members ,properties ,fields
    float rate_of_interest;
    int bank_code;
    int branches;
    bool car_loan;

    //member function /methods
    public:
    bank()
    {

    }
    void initialize(float i, int code, int b,bool cl)
    {
        rate_of_interest=i;
        bank_code=code;
        branches=b;
        car_loan=cl;
    }

    void print_details()
    {
            std::cout<<"rate_of_interest= "<<rate_of_interest<<std::endl;
            std::cout<<"bank_code= "<<bank_code<<std::endl;
            std::cout<<"branches= "<<branches<<std::endl;
            std::cout<<"car_loan= "<<car_loan<<std::endl;
    }
};

int main()
{
    bank sbi;   //instantiation
//    sbi.rate_of_interest=8.0;
//    sbi.bank_code=1234;
//    sbi.car_loan=false;
    sbi.initialize(8.0,1234,100,false);
    sbi.print_details();

    bank kotak;
//    kotak.rate_of_interest=6.0;
//    kotak.bank_code=341234;
//    kotak.car_loan=true;

    kotak.initialize(6.0,341234, 50,true);
    kotak.print_details();
}

