#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    printf("enter a number:");
    scanf("%d",&num);
    if (num>0)
    {
        printf("%d is a positive number.\n",num);
    }
    else if (num <0)
    {
        printf("%d is a negative number.\n", num);

    }
    else
    {
        printf("you entered zero.\n");
    }
    printf("thanks.\n");
    getch();
    return 0;
}
