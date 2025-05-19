#include <stdio.h>
#include <conio.h>

int multiplyDigits(int num);

int main()
{
    int num, result;

    printf("\n Enter a number: ");
    scanf("%d", &num);

    result = multiplyDigits(num);

    printf("\n Multiplication of digits = %d", result);

    getch();
    return 0;
}

int multiplyDigits(int num)
{
    int rem, mul = 1;

    while(num != 0)
    {
        rem = num % 10;
        mul *= rem;
        num /= 10;
    }

    return mul;
}

