#include<stdio.h>
#include<conio.h>
int Is_Super_Prime(int);
int Is_Prime(int);
int Digit_Sum(int);
int main()
{
    int No = 0, Ret = 0;
    printf("\n Enter a Number : ");
    scanf("%d",&No);
    Ret = Is_Super_Prime(No);
    if(Ret == 1)
    {
        printf("\n Given Number %d is Neutral.",No);
    }
    else if(Ret == 2)
    {
        printf("\n Given Number %d is Not Prime.",No);
    }
    else if(Ret == 3)
    {
        printf("\n Given Number %d is Prime But Not Super Prime.",No);
    }
    else
    {
        printf("\n Given Number %d is Super Prime.",No);
    }
    getch();
    return 0;
}
int Digit_Sum(int Num)
{
    int Sum = 0,Dig =0;
    while(Num != 0)
    {
        Dig = Num % 10;
        Sum = Sum + Dig;
        Num = Num / 10;
    }
    return Sum;
}
int Is_Prime(int Num)
{
    int i=0;
    for(i=2;i<Num/2;i++)
    {
        if(Num%i==0)
        {
            break;
        }
    }
    if(Num/2==i)
    {
        i=1;
    }
    return i;
}
int Is_Super_Prime(int Num)
{
    int Res = 0,Sum = 0;
    if(Num == 0|| Num == 1)
    {
        Res = 1;
    }
    else if(Is_Prime(Num)==1)
    {
        Sum == Digit_Sum(Num);
        if(Is_Prime(Sum)==1)
        {
            Res = 4;
        }
        else
        {
            Res = 3;
        }
    }
    else
    {
        Res = 2;
    }
    return  Res;
}
