#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int Num1,Num2,Res;
    printf("\n Enter Number 1 for Addition =  ");
    scanf("%d",&Num1);
    printf("\n Enter Number 2 for Addition = ");
    scanf("%d",&Num2);
    Res = Add(Num1 , Num2);
    printf("\n Addition of %d and %d is = %d",Num1,Num2,Res);

    printf("\n Enter Number 1 for Subtraction =  ");
    scanf("%d",&Num1);
    printf("\n Enter Number 2 for Subtraction = ");
    scanf("%d",&Num2);
    Res = Sub(Num1 , Num2);
    printf("\n Subtraction of %d and %d is = %d",Num1,Num2,Res);

    printf("\n Enter Number 1 for Multiplication =  ");
    scanf("%d",&Num1);
    printf("\n Enter Number 2 for Multiplication = ");
    scanf("%d",&Num2);
    Res = Mult(Num1 , Num2);
    printf("\n Multiplication of %d and %d is = %d",Num1,Num2,Res);

    printf("\n Enter Number 1 for Division =  ");
    scanf("%d",&Num1);
    printf("\n Enter Number 2 for Division = ");
    scanf("%d",&Num2);
    Res = Div(Num1 , Num2);
    printf("\n Division of %d and %d is = %d",Num1,Num2,Res);

    printf("\n Enter Number 1 for Remainder =  ");
    scanf("%d",&Num1);
    printf("\n Enter Number 2 for Remainder = ");
    scanf("%d",&Num2);
    Res = Rem(Num1 , Num2);
    printf("\n Remainder of %d and %d is = %d",Num1,Num2,Res);

    getch();
    return 0;
}
int Add(int N1 , int N2)
{
   int Ans =0;
   Ans = N1 + N2;
   return Ans;
}
int Sub(int N1 , int N2)
{
    int Ans = 0;
    Ans = N1 - N2;
    return Ans;
}
int Mult(int N1 , int N2)
{
    int Ans =0;
    Ans= N1 * N2;
    return Ans;
}
int Div(int N1 ,int N2)
{
    int Ans=0;
    Ans = N1 / N2;
    return Ans;
}
int Rem(int N1 ,int N2)
{
    int Ans =0;
    Ans = N1 % N2;
    return Ans;
}

