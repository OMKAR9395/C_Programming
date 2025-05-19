#include <stdio.h>
#include <conio.h>

int findCube(int n);

int main()
{
    int num, result;

    printf("\n Enter a number: ");
    scanf("%d", &num);

    result = findCube(num);

    printf("\n Cube = %d", result);

    getch();
    return 0;
}

int findCube(int n)
{
    return n * n * n;
}
