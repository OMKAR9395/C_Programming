#include <stdio.h>
#include <conio.h>

int countDigitFrequency(int num, int digit);

int main()
{
    int num, digit, count;

    printf("\n Enter a number: ");
    scanf("%d", &num);

    printf("\n Enter a digit to count: ");
    scanf("%d", &digit);

    count = countDigitFrequency(num, digit);

    printf("\n The digit %d appears %d times.", digit, count);

    getch();
    return 0;
}

int countDigitFrequency(int num, int digit)
{
    int count = 0, rem;

    while(num != 0)
    {
        rem = num % 10;

        if(rem == digit)
            count++;

        num /= 10;
    }

    return count;
}
