#include <stdio.h>
#include <conio.h>
int main()
{
    int number =0, square = 0;
    printf("\n Enter a Number to find its Square : ");
    scanf("%d",&number);
    square = number * number;
    printf("\n Square of %d is = %d",number,square);
    printf("\n Thanks!!");
    getch();
    return 0;
}
