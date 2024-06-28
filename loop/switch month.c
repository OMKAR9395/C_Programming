#include <stdio.h>
#include <conio.h>
int main()
{
    int month;
    printf("enter number between 1 to 12: ");
    scanf("%d",&month);
    switch(month)
    {
    case 1:
        printf("\n january");
        break;
    case 2:
        printf("\n february");
        break;
    case 3:
        printf("\n march");
        break;
    case 4:
        printf("\n april");
        break;
    case 5:
        printf("\n may");
        break;
    case 6:
        printf("\n june");
        break;
    case 7:
        printf("\n july");
        break;
    case 8:
        printf("\n august");
        break;
    case 9:
        printf("\n september");
        break;
    case 10:
        printf("\n octomber");
        break;
    case 11:
        printf("\n november");
        break;
    case 12:
        printf("\n december");
        break;
    default:
        printf("\n error :you entered invalid month");
    }
    printf("\n thanks!");
    getch();
    return 0;
}
