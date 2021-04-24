#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int *p=(int *)malloc(10*sizeof(int));   //int p[10];
//    int *p=(int *)calloc(10 , sizeof(int));   //int p[10];

    if(p==NULL)
    {
        cout<<"Not enough memory"<<endl;
        return 1;
    }
    for(int i=0;i<10;i++)
    {
        p[i] = i;
    }
//    for( int i=0;i<10 ;i++ )
//    {
//        cout<<p[i]<<endl;
//    }
//    void *realloc(void* ptr_malloc, size_t bytes);
    p=(int *)realloc(p,20*sizeof(int));

//    for(int i=10;i<20;i++)
//    {
//        p[i] = i;
//    }
    for( int i=0;i<20 ;i++ )
    {
        cout<<p[i]<<endl;
    }
    free(p);
}

