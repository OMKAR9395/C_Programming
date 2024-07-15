#include<stdio.h>
#include<conio.h>
int Add(int No1,int No2)
{
    int Ans = 0;
    Ans = No1 + No2;
    return Ans;
}
int Sub (int No1 ,int No2)
{
    int Ans = 0;
    Ans = No1 - No2;
    return Ans;
}
int main()
{
    int Num1,Num2,Ans;
    printf("\n Enter of 1 numbers : ");
    scanf("%d,%d",&Num1);
    printf("\n Enter of 2 numbers : ");
    scanf("%d,%d",&Num2);

    Ans = Add(Num1,Num2);
    printf("\n Addition of two numbers is : %d",Ans);

    Ans = Sub(Num1,Num2);
    printf("\n Substraction Of two numbers is :%d ",Ans);
    getch();
    return 0;
}
