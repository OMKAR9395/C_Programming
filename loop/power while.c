#include <stdio.h>
#include <conio.h>
int main()
{
    int number1 = 0, number2 =0, power =1, i=1;
    printf("\n enter a base :");
    scanf("%d",&number1);
    printf("\n enter a power: ");
    scanf("%d",&number2);
    while (i<=number2)
    {
        power = power*number1;
        i++;
    }
    printf("\n power %d raise to %d =%d.",number1,number2,power);
    getch();
    return 0;
}
