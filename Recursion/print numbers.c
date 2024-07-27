#include<stdio.h>
#include<conio.h>
void printNumbers(int n)
{
    if (n > 0)
    {
        printf("%d ", n);
        printNumbers(n - 1);
    }
}

int main()
{
    int num = 10;
    printNumbers(num);
    printf("\n");
    getch();
    return 0;
}

