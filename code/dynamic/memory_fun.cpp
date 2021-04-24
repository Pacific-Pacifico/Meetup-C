#include <iostream>
#include <cstdlib>
using namespace std;

//void *malloc(size_t size_of_whole_block);
//void *calloc(size_t no_of_blocks , size_t size_of_each_block);
int main()
{
//    int *ptr=(int *)malloc(sizeof(int));
    int *ptr=(int *)calloc(1,sizeof(int));
    *ptr=10;
    cout<<*ptr<<endl;
    free(ptr);
}

