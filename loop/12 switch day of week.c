#include <stdio.h>
#include <conio.h>
int main()
{
    int day;
    printf("Enter a number between(1to7) to get the corresponding day of the week: ");
    scanf("%d",&day);
    switch (day)
    {
    case 1:
        printf("\n Sunday");
        break;
    case 2:
        printf("\n Monday");
        break;
    case 3:
        printf("\n Tuesday");
        break;
    case 4:
        printf("\n Wednseday");
        break;
    case 5:
        printf("\n Thursday");

        break;
    case 6:
        printf("\n Friday");
        break;
    case 7:
        printf("\n Saturday");
        break;
    default:
        printf("\n Error: Invalid Day");
    }
    printf("\n Thanks!");
    getch();
    return 0;
}
