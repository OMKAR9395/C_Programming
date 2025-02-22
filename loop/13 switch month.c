#include <stdio.h>
#include <conio.h>
int main()
{
    int month;
    printf("Enter Number Between 1 to 12: ");
    scanf("%d",&month);
    switch(month)
    {
    case 1:
        printf("\n January");
        break;
    case 2:
        printf("\n February");
        break;
    case 3:
        printf("\n March");
        break;
    case 4:
        printf("\n April");
        break;
    case 5:
        printf("\n May");
        break;
    case 6:
        printf("\n June");
        break;
    case 7:
        printf("\n July");
        break;
    case 8:
        printf("\n August");
        break;
    case 9:
        printf("\n September");
        break;
    case 10:
        printf("\n Octomber");
        break;
    case 11:
        printf("\n November");
        break;
    case 12:
        printf("\n December");
        break;
    default:
        printf("\n Error :You Entered Invalid Month");
    }
    printf("\n Thanks!");
    getch();
    return 0;
}
