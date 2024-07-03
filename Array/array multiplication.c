#include<stdio.h>
#include<conio.h>
int main()
{
    int Num[3] = {};
    printf("\n Enter Number 1 : ");
    scanf("%d",&Num[0]);
    printf("\n Enter Number 2 : ");
    scanf("%d",&Num[1]);
    Num[2] = Num[0] * Num[1];
    printf("\n Multiplication of %d x %d = %d",Num[0],Num[1],Num[2]);
    getch();
    return 0;
}
