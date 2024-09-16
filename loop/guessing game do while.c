#include <stdio.h>
#include <conio.h>
    int main()
    {
        int guess, target = 8;
        printf("Guess the number(between 1 to 10): ");
        scanf("%d",&guess);
    if (guess<target)
    {
        printf("\n You just missed target .target is higher");
    }
    else if(guess>target)
    {
        printf("\n You just missed target.target is lower");
    }
    while (guess != target);
    printf("\n Congratulations! you guessed the right numbber.");
    printf("\n Thanks!");
    getch();
    return 0;
    }
