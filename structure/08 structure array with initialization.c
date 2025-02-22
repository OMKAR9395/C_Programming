#include<stdio.h>
#include<conio.h>
struct College
{
    int Roll_No;
    char Name[10];
    char Sub[10];
    float Marks;
    long int Mob;
};
int main()
{
    struct College Std[5]={};
    int i=0;
    for(i=0;i<5;i++)
    {
        printf("\n Student Details No %d\n",i+1);
        printf("\n Student Roll NO is %d",Std[i].Roll_No);
        printf("\n Student Name is %s",Std[i].Name);
        printf("\n Student Subject is %s",Std[i].Sub);
        printf("\n Student Marks are %f",Std[i].Marks);
        printf("\n Student Mobile Number %ld",Std[i].Mob);
    }
    printf("\n Thanks!!!");
    getch();
    return 0;
}
