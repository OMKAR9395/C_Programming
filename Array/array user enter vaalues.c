#include<stdio.h>
#include<conio.h>
int main()
{
    int No[4]={};
    printf("\n Enter First Number : ");
    scanf("%d",&No[0]);
    printf("\n Enter Second Number : ");
    scanf("%d",&No[1]);
    printf("\n Enter Third Number : ");
    scanf("%d",&No[2]);
    printf("\n Enter Fourth Number : ");
    scanf("%d",&No[3]);

    printf("\n\n===================Output===============\n");
    printf("\n Value of No 1 is = %d",No[0]);
    printf("\n Value of No 2 is = %d",No[1]);
    printf("\n Value of No 3 is = %d",No[2]);
    printf("\n Value of No 4 is = %d",No[3]);
    getch();
    return 0;

}
