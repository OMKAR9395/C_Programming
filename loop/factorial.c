#include <stdio.h>
#include <conio.h>
int main()
{
    int number = 0;
    long long int fact = 0;
    up:
    printf("\n Enter a positive number to find itd factorial: ");
    scanf("%d",&number);
    if (number <= 0)
    {
        printf("\n Invalid input ...");
        goto up;
    }
    fact =1;
    while(number > 0)
    {
        fact = fact*number;
        number--;
    }
    printf("\n Factorial is given number is= %lld.",fact);
    printf("\n thanks!!");
    getch();
    return 0;
}
