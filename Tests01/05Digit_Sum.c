//////////////////////////////////////////////////////////////////////
//                                                                  //
//  Write a program to calculate Digit Sum of Given Number.         //
//                                                                  //
//////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>

int Digit_Sum(int);
int main()
{
    int Num=0,Ret=0;

    printf("\n Enter a  Number :");
    scanf("%d",&Num);

    Ret = Digit_Sum(Num);

    printf("\n Digit Sum Of %d is = %d",Num,Ret);

    getch();
    return 0;
}
int Digit_Sum(int No)
{
    int Digit=0,Sum = 0;
    while(No > 0)
    {
        Digit = No % 10 
        Sum = Sum + Digit;
        No = No / 10;

    }
    return Sum;
}