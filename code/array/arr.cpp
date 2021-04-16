#include <iostream>
#include <cstdio>

#define SIZE 10

using namespace std;

int main()
{
//    int n;
//    cout<<"enter size of array=";
//    cin>>n;
    int nums[SIZE];
    for(int i=0;i<SIZE;i++)
    {
//        cout<< "Enter number " << i+1 << " = " << endl;
//        cin>>nums[i];
            nums[i]=(i+1)*10;
    }
//    cout<<"nums[0]="<<0[nums]<<endl;
//    cout<<nums[3/2]<<endl;

    for( int i=0;i<SIZE ;i++ )
    {
        cout<<"\nnums["<<i<<"]= "<<nums[i]<<endl;
//        cout<<"address of nums["<<i<<"]= "<< &nums[i] <<endl;
        printf("address of nums[%d] = %u", i  , &nums[i]);
        cout<<endl;
    }

    cout<<"sizeof nums="<<sizeof(nums)<<endl;
    cout<<"no. of elements="<<sizeof(nums)/sizeof(int)<<endl;
//    int sum=0;
//    for( int i=0;i<5 ;i++ )
//    {
//        sum=sum+nums[i];
//    }
//    cout<<"sum="<<sum<<endl;
}

