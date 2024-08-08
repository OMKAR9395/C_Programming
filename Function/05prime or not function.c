//with out using function
#include<stdio.h>
#include<conio.h>
int main()
{
    int No =0,i=0;
    printf("\n Enter positive integer number : ");
    scanf("%d",&No);

    if(No < 0)
    {
        printf("\n Invalid input!!");
    }
    else if(No==0||No==1)
    {
        printf("\n Number Is Neutral");
    }
    else
    {
        for(i=2;i<No;i++)
        {
            if(No%i==0)
            {
                break;
            }
        }
        if(i==No)
        {
            printf("\n Given Number %d is Prime",No);
        }
        else
        {
            printf("\n given number %d is not prime",No);
        }
    }
    printf("\n Thanks!!");
    getch();
    return 0;
}
