#include <stdio.h>
#include <conio.h>

int containsTwo(int num);

int main()
{
    int num;

    printf("\n Enter a number: ");
    scanf("%d", &num);

    if(containsTwo(num))
        printf("\n It Contains Two");
    else
        printf("\n There is no Two");

    getch();
    return 0;
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

