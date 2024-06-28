#include <stdio.h>
#include <conio.h>
int main()
{
    int month;
    printf("\n enter the month number: ");
    scanf("%d",&month);
    if(month == 12 || month <= 2)
    {
    printf("\n winter.");
    }
    else if (month>= 3&& month <= 5)

    {
    printf("\n spring.");
    }
    else if(month >= 6 && month <= 8)
    {
    printf("\n summer.");
    }
    else
    {
    printf("\n Default");
    }
    getch ();
    return 0;
}
