#include <stdio.h>
#include <conio.h>

void printDigitsReverse(int num);

int main()
{
    int num;

    printf("\n Enter a number: ");
    scanf("%d", &num);

    printf("\n Digits in reverse order:\n");
    printDigitsReverse(num);

    getch();
    return 0;
}

void printDigitsReverse(int num)
{
    while(num != 0)
    {
        printf("%d\n", num % 10);
        num /= 10;
    }
}
