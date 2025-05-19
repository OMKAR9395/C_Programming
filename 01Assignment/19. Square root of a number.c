#include <stdio.h>
#include <conio.h>
#include <math.h>

float findSquareRoot(float n);

int main()
{
    float num, result;

    printf("\n Enter Number: ");
    scanf("%f", &num);

    result = findSquareRoot(num);

    printf("\n The square root of %.0f is: %.2f", num, result);

    getch();
    return 0;
}

float findSquareRoot(float n)
{
    return sqrt(n);
}
