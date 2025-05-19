#include <stdio.h>
#include <conio.h>

void countDigitTypes(int num, int *even, int *odd, int *zero);

int main()
{
    int num, even = 0, odd = 0, zero = 0;

    printf("\n Enter a number: ");
    scanf("%d", &num);

    countDigitTypes(num, &even, &odd, &zero);

    printf("\n Even = %d, Odd = %d, Zeros = %d", even, odd, zero);

    getch();
    return 0;
}

void countDigitTypes(int num, int *even, int *odd, int *zero)
{
    int rem;

    while(num != 0)
    {
        rem = num % 10;

        if(rem == 0)
            (*zero)++;
        else if(rem % 2 == 0)
            (*even)++;
        else
            (*odd)++;

        num /= 10;
    }
}
