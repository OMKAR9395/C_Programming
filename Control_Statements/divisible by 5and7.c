#include <stdio.h>
#include <conio.h>
int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d" ,&number);
    if (number %5==0 && number %7==0)
        {
        printf("\n %d is the number is divisible by 5 and 7",number);
        }
    else

        {
            printf("\n %d is not divided by 5 and 7",number);
        }
        printf("\n Thanks!!");
    getch();
    return 0;
}
