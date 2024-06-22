#include <stdio.h>
#include <conio.h>
    int main()
    {
        int guess, target = 8;
        printf("guess the number(between 1 to 10): ");
        scanf("%d",&guess);
    if (guess<target)
    {
        printf("\n you just missed target .target is higher");
    }
    else if(guess>target)
    {
        printf("\n you just missed target.target is lower");
    }
    while (guess != target);
    printf("\n congratulations! you guessed the right numbber.");
    printf("\n thanks!");
    getch();
    return 0;
    }
