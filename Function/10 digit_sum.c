#include<stdio.h>
#include<conio.h>
int Dig_Sum(int);
int main()
{
    int No=0,Res=0;
    printf("\n Enter A Number To Find Its Sum : ");
    scanf("%d",&No);
    Res = Dig_Sum(No);
    printf("\n Sum of Number %d is = %d",No,Res);
    getch();
    return 0;
}
int Dig_Sum(int Num)
{
    int D_Sum = 0,i=0;
    while(Num > 0)
    {
        D_Sum += Num % 10;
        Num = Num / 10;
    }
    return D_Sum;
}
