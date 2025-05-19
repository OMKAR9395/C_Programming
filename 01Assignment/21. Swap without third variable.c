#include <stdio.h>
#include <conio.h>

void swapNoTemp(int *a, int *b);

int main()
{
    int a, b;

    printf("\n Enter value for A: ");
    scanf("%d", &a);

    printf("\n Enter value for B: ");
    scanf("%d", &b);

    swapNoTemp(&a, &b);

    printf("\n After swapping: A = %d, B = %d", a, b);

    getch();
    return 0;
}

void swapNoTemp(int *a, int *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}
