#include <stdio.h>
#include <conio.h>
int main()
{
    int number =0, square = 0;
    printf("\n enter a number to find its square : ");
    scanf("%d",&number);
    square = number * number;
    printf("\n square of %d is = %d",number,square);
    printf("\n thanks!!");
    getch();
    return 0;
}
