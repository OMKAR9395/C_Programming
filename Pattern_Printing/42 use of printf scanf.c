#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    char Grade = '\0', Name[20]="\0",Course[10]="\0";
    int Roll_No = 0;
    long long int Mob_No = 0;
    float Per = 0.0;
    printf("\n Enter Student Details\n");
    printf("\n Enter  Roll_No : ");
    scanf("%d",&Roll_No);
    fflush(stdin);

    printf("\n Enter Name : ");
    gets(Name);
    fflush(stdin);

    printf("\n Enter Grade : ");
    scanf("%c",&Grade);
    fflush(stdin);

    printf("\n Enter Mobile No : ");
    scanf("lld",&Mob_No);
    fflush(stdin);

    printf("\n Enter Course : ");
    gets(Course);

    printf("\n Enter Percentage : ");
    scanf("%f",&Per);

    printf("\n\n Enter Key To Further!!!");
    getch();

    system("c\s");
    printf("\n\n Given Students Details are Follow");
    printf("\n Roll_No       : %d.",Roll_No);
    printf("\n Name          : %s.",Name);
    printf("\n Course        : %s ",Course);
    printf("\n Mobile No     : %lld",Mob_No);
    getch();
    return 0;
}
