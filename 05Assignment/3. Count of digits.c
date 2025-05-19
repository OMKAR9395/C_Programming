#include <stdio.h>
#include <conio.h>

int countDigits(int num);

int main()
{
    int num, count;

    printf("\n Enter a number: ");
    scanf("%d", &num);

    count = countDigits(num);

    printf("\n Number of digits = %d", count);

    getch();
    return 0;
}

int countDigits(int num)
{
    int count = 0;

    while(num != 0)
    {
        count++;
        num /= 10;
    }

    return count;
}

