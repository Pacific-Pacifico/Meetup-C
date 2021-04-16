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
    int roll;    // 4 bytes
    char name[20];    // 1*20 =20
    float percent;      // 4
}s2;

int main()
{
    printf("sizeof struct student= %u", sizeof(student));
    student s1 = {1, "RAM", 85.6};   //declaration with initialisation
//    printf("\n%d", s1.roll);
//    printf("\n%s",s1.name);
//    printf("\n%f",s1.percent);
    printf("\nAddress of s1.roll= %u",&s1.roll);
    printf("\nAddress of s1.name= %u",&s1.name);
    printf("\nAddress of s1.percent= %u",&s1.percent);

//    s2.roll=2;
//    strcpy(s2.name,"Sita");
//    s2.percent= 90;
    printf("\n%d", s2.roll);
    printf("\n%s",s2.name);
    printf("\n%f",s2.percent);

    return 0;
}

