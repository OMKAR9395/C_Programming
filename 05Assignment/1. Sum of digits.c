#include <stdio.h>
#include <conio.h>

int sumDigits(int num);

int main()
{
    int num, sum;

    printf("\n Enter a number: ");
    scanf("%d", &num);

    printf("\n ");
    sum = sumDigits(num);

    printf("\n Sum Of %d is =%d",num, sum);

    getch();
    return 0;
}

int sumDigits(int num)
{
    int sum = 0, rem;

    while(num != 0)
    {
        rem = num % 10;
        num = num / 10;
        sum += rem;
    }

    return sum;
}

