//////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                          //
//  Write a Program to swap given two numbers without temp variable.                        //
//                                                                                          //
//////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>
int main()
{
    int No1 = 0, No2 = 0;

    printf("\n Enter First Number :");
    scanf("%d",&No1);

    printf("\n Enter Second Number :");
    scanf("%d",&No2);

    No1 = No1 + No2;
    No2 = No1 - No2;
    No1 = No1 - No2;

    printf("\n After Swapping Number First is = %d & Second Number is = %d",No1,No2);

    getch();
    return 0;

}