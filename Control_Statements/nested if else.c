//nested if else
//balance is positive or negative either zero

#include<stdio.h>
#include<conio.h>
int main()
{
    int bal=0;
    printf("\n enter your account balance = ");
    scanf("%d",&bal);
    if (bal>0)
    {
        printf("\n balance is +ve.");

    }
    else if (bal<0)
    {
        printf("\n balance is -ve.");
    }
    else
    {
        printf("balance is zero.");
    }
    printf("\n thanks!!!");
    getch();
    return 0;
 }
