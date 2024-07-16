#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
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
int main()
{
    char ch='\0';
    int Num1=0,Num2=0,Res=0,Choice=0;
    while(1)
    {
        printf("\n\n Select Choice : \n");
        printf("\n\t\t 1. for Addition");
        printf("\n\t\t 2. for Subtraction");
        printf("\n\t\t 3. for Multiplication");
        printf("\n\t\t 4. for Division");
        printf("\n\t\t 5. for Remainder");
        printf("\n\t\t 6. for Exit");

        printf("\n\n Enter Your Choice : ");
        scanf("%d",&Choice);

    switch(Choice)

    {
    case 1:
        printf("\n Enter Number 1 for Addition =  ");
        scanf("%d",&Num1);
        printf("\n Enter Number 2 for Addition = ");
        scanf("%d",&Num2);

        Res = Add(Num1 , Num2);
        printf("\n Addition of %d and %d is = %d",Num1,Num2,Res);
        getch();
        fflush(stdin);
        system("cls");
    break;

    case 2:
        printf("\n Enter Number 1 for Subtraction =  ");
        scanf("%d",&Num1);
        printf("\n Enter Number 2 for Subtraction = ");
        scanf("%d",&Num2);

        Res = Sub(Num1 , Num2);
        printf("\n Subtraction of %d and %d is = %d",Num1,Num2,Res);
        getch();
        fflush(stdin);
        system("cls");
        break;

    case 3:
        printf("\n Enter Number 1 for Multiplication =  ");
        scanf("%d",&Num1);
        printf("\n Enter Number 2 for Multiplication = ");
        scanf("%d",&Num2);

        Res = Mult(Num1 , Num2);
        printf("\n Multiplication of %d and %d is = %d",Num1,Num2,Res);
        getch();
        fflush(stdin);
        system("cls");
        break;

    case 4:
        printf("\n Enter Number 1 for Division =  ");
        scanf("%d",&Num1);
        printf("\n Enter Number 2 for Division = ");
        scanf("%d",&Num2);

        Res = Div(Num1 , Num2);
        printf("\n Division of %d and %d is = %d",Num1,Num2,Res);
        getch();
        fflush(stdin);
        system("cls");
        break;

    case 5:
        printf("\n Enter Number 1 for Remainder =  ");
        scanf("%d",&Num1);
        printf("\n Enter Number 2 for Remainder = ");
        scanf("%d",&Num2);

        Res = Rem(Num1 , Num2);
        printf("\n Remainder of %d and %d is = %d",Num1,Num2,Res);
        getch();
        fflush(stdin);
        system("cls");
        break;

    case 6:
        printf("\n Are You Sure Do you Want To Exit ???(Yes/No): ");
        fflush(stdin);
        ch = getchar();
            if(ch=='y' || ch=='Y')
            {
            printf("\n Terminating the calculator.!!");
            goto out;

            }
        fflush(stdin);
        system("cls");
        break;
        }
}
    out:
        printf("\n Thanks for using calculator!!");

    getch();
    return 0;
}


