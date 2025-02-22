#include <stdio.h>
#include <conio.h>
int main()
{
    char colour;
    printf("Enter traffic colour (R for Red,Y for Yellow, G for Green): ");
    scanf("%c",&colour);
    switch(colour)
    {
    case 'R':
    case 'r':
        printf("\n STOP");
        break;
    case 'Y':
    case 'y':
        printf("\n START A BIKE");
        break;
    case 'G':
    case 'g':
        printf("\n GO SLOW");
        break;
    default:
        printf("\n Error: You Entered Wrong Character");
    }
    printf("\n Thanks");
    getch();
    return 0;
}
