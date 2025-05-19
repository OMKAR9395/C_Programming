#include <stdio.h>
#include <conio.h>

int isPalindrome(int num);
int reverseNumber(int num);

int main()
{
    int num;

    printf("\n Enter a number: ");
    scanf("%d", &num);

    if(isPalindrome(num))
        printf("\n The number is a palindrome.");
    else
        printf("\n The number is not a palindrome.");

    getch();
    return 0;
}

int isPalindrome(int num)
{
    return (num == reverseNumber(num));
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
