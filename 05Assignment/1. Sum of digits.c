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

    printf(" = %d", sum);

    getch();
    return 0;
}

int sumDigits(int num)
{
    int sum = 0, rem;
    int first = 1;

    while(num != 0)
    {
        rem = num % 10;
        num = num / 10;

        if(first)
        {
            printf("%d", rem);
            first = 0;
        }
        else
        {
            printf("+%d", rem);
        }

        sum += rem;
    }

    return sum;
}

