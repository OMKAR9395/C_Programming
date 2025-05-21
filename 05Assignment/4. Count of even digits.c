#include <stdio.h>
#include <conio.h>

int countEvenDigits(int num);

int main()
{
    int num, count;

    printf("\n Enter a number: ");
    scanf("%d", &num);

    count = countEvenDigits(num);

    printf("\n Count of even digits = %d", count);

    getch();
    return 0;
}

int countEvenDigits(int num)
{
    int count = 0, rem;

    while(num != 0)
    {
        rem = num % 10;

        if(rem % 2 == 0)
            count++;
        num /= 10;
    }

    return count;
}

