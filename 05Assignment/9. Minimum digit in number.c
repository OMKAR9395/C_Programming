#include <stdio.h>
#include <conio.h>

int findMinDigit(int num);

int main()
{
    int num, min;

    printf("\n Enter a number: ");
    scanf("%d", &num);

    min = findMinDigit(num);

    printf("\n The minimum digit is: %d", min);

    getch();
    return 0;
}

int findMinDigit(int num)
{
    int rem, min = 9;

    while(num != 0)
    {
        rem = num % 10;

        if(rem < min)
            min = rem;

        num /= 10;
    }

    return min;
}
