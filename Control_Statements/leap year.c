#include <stdio.h>
#include <conio.h>
int main()
{
    int year;
    printf("enter a year: ");
    scanf("%d",&year);
    if ((year % 4 == 0 && year % 100 !=0) || (year % 400==0))
    {
        printf("\n %d is a leap year.",year);
    }
    else

    {
        printf("\n %d is not a leap year.",year);
    }
    printf("\n thanks");
    getch();
    return 0;
}
