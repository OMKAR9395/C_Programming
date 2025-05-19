#include <stdio.h>
#include <conio.h>

int countZeros(int num);

int main()
{
    int num, zeroCount;

    printf("\n Enter a number: ");
    scanf("%d", &num);

    zeroCount = countZeros(num);

    printf("\n Number of zeros = %d", zeroCount);

    getch();
    return 0;
}

int countZeros(int num)
{
    int rem, count = 0;

    while(num != 0)
    {
        rem = num % 10;

        if(rem == 0)
            count++;

        num /= 10;
    }

    return count;
}
