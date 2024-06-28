#include <stdio.h>
#include <conio.h>
int main()
{
    int day;
    printf("enter a number between(1to7) to get the corresponding day of the week: ");
    scanf("%d",&day);
    switch (day)
    {
    case 1:
        printf("\n sunday");
        break;
    case 2:
        printf("\n monday");
        break;
    case 3:
        printf("\n tuesday");
        break;
    case 4:
        printf("\n wednseday");
        break;
    case 5:
        printf("\n thursday");

        break;
    case 6:
        printf("\n friday");
        break;
    case 7:
        printf("\n saturday");
        break;
    default:
        printf("\n error: invalid day");
    }
    printf("\n thanks!");
    getch();
    return 0;
}
