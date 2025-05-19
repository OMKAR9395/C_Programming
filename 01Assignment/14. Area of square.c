#include <stdio.h>
#include <conio.h>

float calculateSquareArea(float side);

int main()
{
    float side, area;

    printf("\n Enter Side Length: ");
    scanf("%f", &side);

    area = calculateSquareArea(side);

    printf("\n Area = %.4f", area);

    getch();
    return 0;
}

float calculateSquareArea(float side)
{
    return side * side;
}

