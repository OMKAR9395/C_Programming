#include <stdio.h>
#include <conio.h>
int main()
{
    int score;
        printf("Enter your exam score: ");
        scanf("%d",&score);
    if (score>= 90)
    {
        printf("\n Your Grade is A.");
    }
    else if (score>= 80)
    {
        printf("\n Your Grade is B.");
    }
    else if (score>= 70)
    {
        printf("\n Your Grade is C.");
    }
    else if (score>= 60)
    {
        printf("\n Your Grade is D.");
    }
    else if (score>= 50)
    {
        printf("\n Your Grade is E.");
    }
    else
    {
        printf("\n Your Grade is f.");
    }
    printf("\n Thanks.");
    getch();

    return 0;
}
