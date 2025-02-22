#include <stdio.h>
#include <conio.h>
int main()
{
    int month;
    printf("\n Enter the Month Number: ");
    scanf("%d",&month);
    if(month == 12 || month <= 2)
    {
    printf("\n Winter.");
    }
    else if (month>= 3&& month <= 5)

    {
    printf("\n Spring.");
    }
    else if(month >= 6 && month <= 8)
    {
    printf("\n Summer.");
    }
    else
    {
    printf("\n Default");
    }
    getch ();
    return 0;
}
