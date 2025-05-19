#include <stdio.h>
#include <conio.h>

int isFiveDigit(int num);
int sumOfDigits(int num);

int main()
{
    int num, sum;

    printf("\n Enter a number: ");
    scanf("%d", &num);

    if(isFiveDigit(num))
    {
        sum = sumOfDigits(num);
        printf("\n The sum of digits is: %d", sum);
    }
    else
    {
        printf("\n Invalid input");
    }

    getch();
    return 0;
}

int isFiveDigit(int num)
{
    int count = 0;

    while(num != 0)
    {
        num /= 10;
        count++;
    }

    return (count == 5);
}

int sumOfDigits(int num)
{
    int sum = 0;

    while(num != 0)
    {
        sum += num % 10;
        num /= 10;
    }

    return sum;
}

