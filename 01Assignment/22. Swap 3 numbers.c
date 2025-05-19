#include <stdio.h>
#include <conio.h>

void swapThree(int *a, int *b, int *c);

int main()
{
    int a, b, c;

    printf("\n Enter value for A: ");
    scanf("%d", &a);

    printf("\n Enter value for B: ");
    scanf("%d", &b);

    printf("\n Enter value for C: ");
    scanf("%d", &c);

    swapThree(&a, &b, &c);

    printf("\n After swapping: A = %d, B = %d, C = %d", a, b, c);

    getch();
    return 0;
}

void swapThree(int *a, int *b, int *c)
{
    int temp = *a;
    *a = *c;
    *c = *b;
    *b = temp;
}
