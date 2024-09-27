//////////////////////////////////////////////////////////////////////
//                                                                  //
//  Write a Program to calculate sum of 'N' Inputed Numbers.        //
//                                                                  //
//////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>
int main()
{
    int N=0, Temp=0, i=0,Sum=0;

    printf("\n Enter a Number to Calculate Sum :");
    scanf("%d",&N);

    for(i=1; i<=N;i++)
    {
        printf("\n Enter %d Number :",i);
        scanf("%d",&Temp);

        Sum = Sum + Temp;
    }

    printf("\n Sum Of %d Numbers is = %d",N,Sum);

    getch();
    return 0;
}