#include <stdio.h>
#include <conio.h>

int isFourDigit(int num);
int reverseNumber(int num);

int main()
{
    int num;

    do
    {
        printf("\n Enter a 4-digit number: ");
        scanf("%d", &num);
    } while(!isFourDigit(num));

    printf("\n Reverse Number = %d", reverseNumber(num));

    getch();
    return 0;
}

int isFourDigit(int num)
{
    return (num >= 1000 && num <= 9999);
}

int reverseNumber(int num)
{
    int rev = 0;

    while(num != 0)
    {
        rev = rev * 10 + (num % 10);
        num /= 10;
    }

    return rev;
}

