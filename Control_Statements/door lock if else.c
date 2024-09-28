#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    printf("Enter a Number:");
    scanf("%d",&num);
    if (num>0)
    {
        printf("%d is a Positive Number.\n",num);
    }
    else if (num <0)
    {
        printf("%d is a Negative Number.\n", num);

    }
    else
    {
        printf("You Entered Zero.\n");
    }
    printf("Thanks.\n");
    getch();
    return 0;
}
