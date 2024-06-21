#include <stdio.h>
#include <conio.h>
int main()
{
    int number = 0, temp =0;
    long long int fact = 0;
    up:
    printf("\n Enter a positive number to find its factorial: ");
    scanf("%d",&number);
    if (number <= 0)
    {
        printf("\n Invalid input ...");
        goto up;
    }
    for(temp = number,fact = 1;temp > 0; temp--)
    {
        fact = fact * temp;
    }
    printf("\n factorial of %d is = %d.",number,fact);
    printf("\n thanks!!");
    getch();
    return 0;
}
