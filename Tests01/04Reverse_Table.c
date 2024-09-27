//////////////////////////////////////////////////////////////////////////
//                                                                      //
//  Write a Program to print table of given number is reverse order.    //
//                                                                      //
//////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>
int main()
{
    int No=0,i=0;

    printf("\n Enter a Number :");
    scanf("%d", &No);

    for(i=10;i>=1;i--)
    {
        printf("\n\t%3d * %3d = %3d", No , i , No * i);
    }

    getch();
    return 0;
}