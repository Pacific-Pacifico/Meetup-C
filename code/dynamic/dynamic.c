#include<stdio.h>
#include<stdlib.h>

//void *malloc(size_t size);
int main()
{
    int *ptr=malloc(sizeof(int));
    *ptr=10;
    printf("%d",*ptr);
    free(ptr);
}
