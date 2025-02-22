//nested if else
//balance is positive or negative either zero

#include<stdio.h>
#include<conio.h>
int main()
{
    int bal=0;
    printf("\n Enter your account balance = ");
    scanf("%d",&bal);
    if (bal>0)
    {
        printf("\n Balance is +ve.");

    }
    else if (bal<0)
    {
        printf("\n Balance is -ve.");
    }
    else
    {
        printf("Balance is zero.");
    }
    printf("\n Thanks!!!");
    getch();
    return 0;
 }
