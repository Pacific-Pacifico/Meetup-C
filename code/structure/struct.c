#include<stdio.h>
#include<string.h>
/*
struct structure_name
{
    datatype1 member1;  //members
    datatype2 mem2;
};
*/
struct  student     //global structure
{
    //members ,fields,elements
    int roll;
    char name[20];
    float percent;
}s2;

int main()
{
    struct student s1 = {1, "RAM", 85.6};   //declaration with initialisation
    printf("%d", s1.roll);
    printf("\n%s",s1.name);
    printf("\n%f",s1.percent);

//    struct student s2;
    s2.roll=2;
    strcpy(s2.name,"Sita");
    s2.percent= 90;
    printf("\n%d", s2.roll);
    printf("\n%s",s2.name);
    printf("\n%f",s2.percent);

    return 0;
}
