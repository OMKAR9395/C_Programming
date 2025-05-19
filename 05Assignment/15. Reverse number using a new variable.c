#include <stdio.h>
#include <conio.h>

int reverseNumber(int num);

int main()
{
    int num, rev;

    printf("\n Enter a number: ");
    scanf("%d", &num);

    rev = reverseNumber(num);

    printf("\n Original Number: %d ; Reverse: %d", num, rev);

    getch();
    return 0;
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
