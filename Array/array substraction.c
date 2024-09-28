#include<stdio.h>
#include<conio.h>
int main()
{
    int Num[3]={};
    printf("\n Enter Number 1 to substract: ");
    scanf("%d",&Num[0]);
    printf("\n Enter Number 2 to substract: ");
    scanf("%d",&Num[1]);

    Num[2]=Num[0]-Num[1];

    printf("\n Substraction of %d - %d = %d",Num[0],Num[1],Num[2]);
    getch();
    return 0;
}
