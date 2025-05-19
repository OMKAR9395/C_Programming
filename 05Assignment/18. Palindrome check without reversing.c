#include <stdio.h>
#include <conio.h>

int checkPalindromeNoReverse(int num);

int main()
{
    int num;

    printf("\n Enter a number: ");
    scanf("%d", &num);

    if(checkPalindromeNoReverse(num))
        printf("\n The number is a palindrome.");
    else
        printf("\n The number is not a palindrome.");

    getch();
    return 0;
}

int checkPalindromeNoReverse(int num)
{
    int original = num, temp = 0, power = 1;

    // Calculate power of 10
    while(num / power >= 10)
        power *= 10;

    while(num != 0)
    {
        int first = num / power;
        int last = num % 10;

        if(first != last)
            return 0;

        // Remove first and last digits
        num = (num % power) / 10;
        power /= 100;
    }

    return 1;
}

