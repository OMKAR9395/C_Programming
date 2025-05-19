#include <stdio.h>
#include <conio.h>

int countTwoFrequency(int num);

int main()
{
    int num, freq;

    printf("\n Enter a number: ");
    scanf("%d", &num);

    freq = countTwoFrequency(num);

    printf("\n Frequency of 2 = %d", freq);

    getch();
    return 0;
}

int countTwoFrequency(int num)
{
    int count = 0, rem;

    while(num != 0)
    {
        rem = num % 10;

        if(rem == 2)
            count++;

        num /= 10;
    }

    return count;
}

