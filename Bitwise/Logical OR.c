#include<stdio.h>
#include<conio.h>
int main()
{
    int No1=0,No2=0,Res=0;
    printf("\n Enter a Number 1 : ");
    scanf("%d",&No1);
    printf("\n Enter a Number 2 : ");
    scanf("%d",&No2);
    Res = No1 | No2;
    printf("\n Number %d And %d is Logical OR = %d",No1,No2,Res);
    getch();
    return 0;
}

