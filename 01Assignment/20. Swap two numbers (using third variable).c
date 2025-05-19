#include <stdio.h>
#include <conio.h>

void swapNumbers(int *a, int *b);

int main()
{
    int a, b;

    printf("\n Enter value for A: ");
    scanf("%d", &a);

    printf("\n Enter value for B: ");
    scanf("%d", &b);

    swapNumbers(&a, &b);

    printf("\n After swapping: A = %d, B = %d", a, b);

    getch();
    return 0;
}

void swapNumbers(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

