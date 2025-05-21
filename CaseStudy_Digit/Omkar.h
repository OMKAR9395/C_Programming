
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int sumDigits(int num)
{
    int sum = 0, rem;
    int first = 1;
    while(num != 0)
    {
        rem = num % 10;
        num = num / 10;
        sum += rem;
    }
    return sum;
}

int multiplyDigits(int num)
{
    int rem, mul = 1;
    while(num != 0)
    {
        rem = num % 10;
        mul *= rem;
        num /= 10;
    }
    return mul;
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

int countEvenDigits(int num)
{
    int count = 0, rem;
    while(num != 0)
    {
        rem = num % 10;
        if(rem % 2 == 0)
            count++;
        num /= 10;
    }
    return count;
}

int countOddDigits(int num)
{
    int count = 0, rem;
    while(num != 0)
    {
        rem = num % 10;
        if(rem % 2 != 0)
            count++;
        num /= 10;
    }
    return count;
}

void countDigitTypes(int num, int *even, int *odd, int *zero)
{
    int rem;
    while(num != 0)
    {
        rem = num % 10;
        if(rem == 0)
            (*zero)++;
        else if(rem % 2 == 0)
            (*even)++;
        else
            (*odd)++;
        num /= 10;
    }
}

int calculateEvenOddDiff(int num)
{
    int rem, evenSum = 0, oddSum = 0;
    while(num != 0)
    {
        rem = num % 10;
        if(rem % 2 == 0)
            evenSum += rem;
        else
            oddSum += rem;
        num /= 10;
    }
    return evenSum - oddSum;
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

int containsTwo(int num)
{
    int rem;
    while(num != 0)
    {
        rem = num % 10;
        if(rem == 2)
            return 1;
        num /= 10;
    }
    return 0;
}

int countDigitFrequency(int num, int digit)
{
    int count = 0, rem;
    while(num != 0)
    {
        rem = num % 10;
        if(rem == digit)
            count++;
        num /= 10;
    }
    return count;
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

int isFourDigit(int num)
{
    return (num >= 1000 && num <= 9999);
}

int isPalindrome(int num)
{
    return (num == reverseNumber(num));
}

int checkPalindromeNoReverse(int num)
{
    int power = 1;
    while(num / power >= 10)
        power *= 10;
    while(num != 0)
    {
        int first = num / power;
        int last = num % 10;
        if(first != last)
            return 0;
        num = (num % power) / 10;
        power /= 100;
    }
    return 1;
}

void inplaceReverse(int *num)
{
    int n = *num, rev = 0;
    while(n != 0)
    {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }
    *num = rev;
}

void printDigitsReverse(int num)
{
    while(num != 0)
    {
        printf("%d\n", num % 10);
        num /= 10;
    }
}
