#include <stdio.h>
#include <conio.h>

int calculateEvenOddDiff(int num);

int main()
{
    int num, diff;

    printf("\n Enter a number: ");
    scanf("%d", &num);

    diff = calculateEvenOddDiff(num);

    printf("\n Difference (Even - Odd) = %d", diff);

    getch();
    return 0;
}

int calculateEvenOddDiff(int num)
{
    int rem, evenSum = 0, oddSum = 0;

    while(num != 0)
    {
        rem = num % 10;

        if(rem % 2 == 0)
            evenSum += rem;
        else
            oddSum += rem;

        num /= 10;
    }

    return evenSum - oddSum;
}
