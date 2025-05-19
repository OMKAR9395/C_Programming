#include <stdio.h>
#include <conio.h>

int countOddDigits(int num);  // Function Prototype

int main()
{
    int num, count;

    printf("\n Enter a number: ");
    scanf("%d", &num);

    count = countOddDigits(num);

    printf("\n Count of odd digits = %d", count);

    getch();
    return 0;
}

int countOddDigits(int num)
{
    int count = 0, rem;

    while(num != 0)
    {
        rem = num % 10;

        if(rem % 2 != 0)
            count++;

        num /= 10;
    }

    return count;
}

