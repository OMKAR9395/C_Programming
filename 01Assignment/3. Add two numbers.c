#include <stdio.h>
#include <conio.h>

void addNumbers()
{
    int num1, num2, sum;

    printf("\n Enter Number 1: ");
    scanf("%d", &num1);

    printf("\n Enter Number 2: ");
    scanf("%d", &num2);

    sum = num1 + num2;

    printf("\n The result of adding %d and %d is: %d", num1, num2, sum);
}

int main()
{
    addNumbers();
    getch();
    return 0;
}
