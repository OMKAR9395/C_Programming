#include <stdio.h>
#include <conio.h>

int findMaxDigit(int num);

int main()
{
    int num, max;

    printf("\n Enter a number: ");
    scanf("%d", &num);

    max = findMaxDigit(num);

    printf("\n The maximum digit is: %d", max);

    getch();
    return 0;
}

int findMaxDigit(int num)
{
    int rem, max = 0;

    while(num != 0)
    {
        rem = num % 10;

        if(rem > max)
            max = rem;

        num /= 10;
    }

    return max;
}
