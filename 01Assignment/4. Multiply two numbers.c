#include <stdio.h>
#include <conio.h>

int multiply(int a, int b)
{
    return a * b;
}

int main()
{
    int num1, num2, result;

    printf("\n Enter Number 1: ");
    scanf("%d", &num1);

    printf("\n Enter Number 2: ");
    scanf("%d", &num2);

    result = multiply(num1, num2);

    printf("\n The result of multiplying %d and %d is: %d", num1, num2, result);

    getch();
    return 0;
}
