//////////////////////////////////////////////////////////
//                                                      //
//  Write a program to check whether Palindrome or not. //
//                                                      //
//////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>
int main()
{
    int Num =0, Temp =0, Dig =0,Rev=0;

    printf("\n Enter a Number :");
    scanf("%d",&Num);

    Temp = Num;

    while(Temp>0)
    {
        Dig = Temp % 10;
        Rev = (Rev * 10) + Dig;
        Temp = Temp /10;
    }

    if(Rev == Num)
    {
        printf("\n %d is a Palindrome!!",Num);
    }
    else
    {
        printf("\n %d is Not Palindrome!!",Num);
    }

    getch();
    return 0;
}