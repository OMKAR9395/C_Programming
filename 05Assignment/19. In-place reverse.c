#include <stdio.h>
#include <conio.h>

void inplaceReverse(int *num);

int main()
{
    int num;

    printf("\n Enter a number: ");
    scanf("%d", &num);

    inplaceReverse(&num);

    printf("\n Reversed number: %d", num);

    getch();
    return 0;
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

