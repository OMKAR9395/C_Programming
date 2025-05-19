#include <stdio.h>
#include <conio.h>

int findSquare(int n);

int main()
{
    int num, result;

    printf("\n Enter a number: ");
    scanf("%d", &num);

    result = findSquare(num);

    printf("\n Square = %d", result);

    getch();
    return 0;
}

int findSquare(int n)
{
    return n * n;
}
